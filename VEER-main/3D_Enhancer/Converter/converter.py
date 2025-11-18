import open3d as o3d
import numpy as np
import os
import sys

# ----------------------------------------
# Step 1: Load Point Cloud
# ----------------------------------------
def load_point_cloud(file_path):
    try:
        if not os.path.exists(file_path):
            raise FileNotFoundError(f"Point cloud file not found at: {file_path}")
            
        # Check file extension
        if not file_path.lower().endswith(('.ply', '.pcd', '.xyz', '.xyzrgb')):
            raise ValueError("Unsupported file format. Please use .ply, .pcd, .xyz, or .xyzrgb files")
            
        pcd = o3d.io.read_point_cloud(file_path)
        if len(pcd.points) == 0:
            raise ValueError("Point cloud is empty")
            
        print(f"Successfully loaded {len(pcd.points)} points from {file_path}")
        return pcd
    except Exception as e:
        print(f"Error loading point cloud: {str(e)}")
        sys.exit(1)

# ----------------------------------------
# Step 2: Preprocess Point Cloud
# ----------------------------------------
def preprocess_point_cloud(pcd, nb_neighbors=20, std_ratio=2.0):
    try:
        # Remove statistical outliers (noise)
        cl, _ = pcd.remove_statistical_outlier(nb_neighbors=nb_neighbors, std_ratio=std_ratio)
        print(f"Removed outliers. Remaining points: {len(cl.points)}")
        
        # Estimate normals (required for Poisson reconstruction)
        cl.estimate_normals(
            search_param=o3d.geometry.KDTreeSearchParamHybrid(radius=0.1, max_nn=30)
        )
        
        # Orient normals consistently
        cl.orient_normals_consistent_tangent_plane(k=15)
        print("Normals estimated and oriented")
        return cl
    except Exception as e:
        print(f"Error in preprocessing: {str(e)}")
        sys.exit(1)

# ----------------------------------------
# Step 3: Poisson Surface Reconstruction
# ----------------------------------------
def poisson_reconstruction(pcd, depth=9, density_threshold_percentile=1):
    try:
        # Run Poisson reconstruction
        mesh, densities = o3d.geometry.TriangleMesh.create_from_point_cloud_poisson(
            pcd, depth=depth
        )
        
        # Remove low-density vertices
        densities = np.asarray(densities)
        density_threshold = np.quantile(densities, density_threshold_percentile/100)
        vertices_to_remove = densities < density_threshold
        mesh.remove_vertices_by_mask(vertices_to_remove)
        
        print(f"Mesh created with {len(mesh.vertices)} vertices and {len(mesh.triangles)} triangles")
        return mesh
    except Exception as e:
        print(f"Error in reconstruction: {str(e)}")
        sys.exit(1)

# ----------------------------------------
# Step 4: Post-Process Mesh
# ----------------------------------------
def post_process_mesh(mesh, smooth_iterations=3, target_triangles=100000):
    try:
        # Smooth mesh
        mesh = mesh.filter_smooth_simple(number_of_iterations=smooth_iterations)
        mesh.compute_vertex_normals()
        
        # Simplify mesh if needed
        if len(mesh.triangles) > target_triangles:
            mesh = mesh.simplify_quadric_decimation(target_number_of_triangles=target_triangles)
            print(f"Mesh simplified to {len(mesh.triangles)} triangles")
        
        return mesh
    except Exception as e:
        print(f"Error in post-processing: {str(e)}")
        sys.exit(1)

# ----------------------------------------
# Main Workflow
# ----------------------------------------
def convert_point_cloud_to_mesh(input_path, output_path, depth=9, smooth_iterations=3):
    try:
        # Load point cloud
        pcd = load_point_cloud(input_path)
        
        # Preprocess
        pcd_clean = preprocess_point_cloud(pcd)
        
        # Optional: Visualize cleaned point cloud
        print("Opening visualization window... Close it to continue processing")
        o3d.visualization.draw_geometries([pcd_clean])
        
        # Reconstruct mesh
        mesh = poisson_reconstruction(pcd_clean, depth=depth)
        
        # Post-process
        mesh = post_process_mesh(mesh, smooth_iterations=smooth_iterations)
        
        # Save output
        o3d.io.write_triangle_mesh(output_path, mesh)
        print(f"Mesh successfully saved to {output_path}")
        
    except Exception as e:
        print(f"Error in conversion process: {str(e)}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python converter.py <input_point_cloud_path> <output_mesh_path>")
        print("Example: python converter.py input.ply output.ply")
        sys.exit(1)
        
    input_path = sys.argv[1]
    output_path = sys.argv[2]
    
    # You can adjust these parameters based on your needs
    depth = 9  # Higher values (10-12) for more detail
    smooth_iterations = 3  # More iterations for smoother results
    
    convert_point_cloud_to_mesh(input_path, output_path, depth, smooth_iterations)