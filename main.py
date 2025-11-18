import os
import subprocess
import sys
from pathlib import Path

def create_directory_if_not_exists(directory):
    """Create directory if it doesn't exist."""
    if not os.path.exists(directory):
        os.makedirs(directory)

def run_nerf_model_creation():
    """Run NeRF model creation and save to VRfiles folder."""
    try:
        from nerf_implementation import create_nerf_model
        model_path = create_nerf_model()
        return model_path
    except ImportError:
        sys.exit(1)

def process_with_pointcleanner(input_model_path):
    """Process the model using pointcleanner."""
    try:
        output_path = os.path.join("VRfiles", "cleaned_model")
        create_directory_if_not_exists(output_path)
        
        subprocess.run([
            "python", 
            "pointcleanner/main.py",
            "--input", input_model_path,
            "--output", output_path
        ], check=True)
        
        return output_path
    except subprocess.CalledProcessError:
        sys.exit(1)

def display_in_unreal_engine(model_path):
    """Display the model using Unreal Engine plugin."""
    try:
        from unreal_engine_plugin import visualize_model
        visualize_model(model_path)
    except ImportError:
        sys.exit(1)

def main():
    create_directory_if_not_exists("VRfiles")
    nerf_model_path = run_nerf_model_creation()
    cleaned_model_path = process_with_pointcleanner(nerf_model_path)
    display_in_unreal_engine(cleaned_model_path)

if __name__ == "__main__":
    main()
