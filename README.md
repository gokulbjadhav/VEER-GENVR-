# VEER (Virtually Enhanced Environmental Reality)

![VEER Project](VR_files/Demo/name.png)

VEER is a comprehensive 3D visualization and enhancement platform that combines multiple advanced technologies for creating, processing, and rendering high-quality virtual environments. The project integrates various components for 3D construction, enhancement, and processing to deliver an immersive **REALM Generation** experience.

## 🎥 Demo Video

[![VEER Demo Video](https://img.youtube.com/vi/tIE7262vqmc/0.jpg)](https://youtu.be/tIE7262vqmc)

*Click the thumbnail above to watch the demo video*

## 🌟 Features

### 3D Construction
- **GAN-based 3D Generation**: Implements both 3D-GAN and 3D-IWGAN models for generating 3D objects

  **Improved Adversarial Systems for 3D Object Generation and Reconstruction:**
  ![Diagram](VR_files/Demo/g2.png?raw=true "Title")
  
  A diagram outlining the 3 Generative Adverserial Networks used in this Project.
- **Neural Radiance Fields (NeRF)**: Integration with Instant-NGP for high-quality novel view synthesis
- **Gaussian Splatting**: Real-time radiance field rendering with state-of-the-art visual quality

### 3D Enhancement
- **Point Cloud Processing**: Advanced point cloud cleaning and enhancement using PointCleanNet
- **Noise Removal**: Sophisticated denoising algorithms for 3D point clouds
- **Outlier Detection**: Automatic detection and removal of outliers in 3D data

### Realm Processing
- **Web-based Visualization**: Interactive 3D point cloud visualization using Three.js
  [![Three.js Demo](https://img.youtube.com/vi/g743dodB_Kg/0.jpg)](https://youtu.be/g743dodB_Kg)

- **Game Engine Integration**: Real-time 3D rendering and interaction in both Unity and Unreal Engine

### VR Support
- **VR Model Integration**: Seamless integration of 3D models into VR experiences
- **VR Scene Management**: Tools for managing and organizing VR scenes
- **VR Performance Optimization**: Techniques for optimizing VR performance

## 📁 Project Structure

```
VEER/
├── 3D_Constructor/         
│   ├── GAN/              
│   │   ├── 3D-IWGAN/     
│   │   └── 3D-GAN/       
│   ├── NeRF/              
│   │   └── NGP/          
│   └── Gaussian Splatting/ 
│       └── gaussian-splatting-app/ 
├── 3D_Enhancer/           
│   └── pointcleanner/     
├── Realm_Processor/      
│   ├── Web_view/          
│   │   └── main2/        # Three.js visualization
│   ├── Unity_plugin/      
│   │   └── UnityGaussianSplatting/
│   └── Unreal_plugin/ 
│        └── XV3dGS   
└── VR_files/             
    ├── Demo/             
    ├── Models/           


```

## 🚀 Getting Started

### Prerequisites
- Python 3.x
- CUDA-compatible GPU (Minimum: NVIDIA RTX 3050 or better)
- Unity 2022.3 or later (for Unity components)
- Unreal Engine 5.0 or later (for Unreal Engine components)
- Modern web browser (for web visualization)
- VR Headset (for VR features)

### Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/VEER.git
cd VEER
```

2. Install Python dependencies:
```bash
pip install -r requirements.txt
```

3. For Game Engine components:
- Unity: Open the Unity project in `Realm_Processor/Unity_plugin/UnityGaussianSplatting`
- Unreal Engine: Open the Unreal project in `Realm_Processor/Unreal_plugin`
- Install required packages through respective Package Managers
- Install Gaussian Splatting application: Run `3D_Constructor/Gaussian Splatting/gaussian-splatting-app/Postshot-BETA-0.3.203.exe` for instant Gaussian Splat creation

4. For VR components:
- Install VR SDKs for your target platform (Oculus, SteamVR, etc.)
- Configure VR settings in your preferred game engine
- Set up VR input devices and controllers

5. Running the Project:
- Try running the main script first:
```bash
python main.py
```
- If main.py doesn't work (as it's still in development), you can run each module manually following the instructions in the Usage section below.

## 💻 Usage

### 3D Generation
```bash
# Generate 3D objects using GAN
python 3D_Constructor/GAN/3D-IWGAN/3D-Generation/32-3D-IWGan.py

# Train NeRF model
python 3D_Constructor/NeRF/NGP/train.py --data_path <your_data_path>
```

### Point Cloud Processing
```bash
# Clean point clouds
python 3D_Enhancer/pointcleanner/clean.py --input <input_file> --output <output_file>

# Remove noise
python 3D_Enhancer/pointcleanner/denoise.py --input <input_file> --output <output_file>
```

### Visualization
- Web Viewer: Open `Realm_Processor/Web_view/main2/index.html` in a web browser
- Unity Viewer: Open the Unity project and load your 3D models
- Unreal Viewer: Open the Unreal Engine project and import your 3D models
- VR Viewer: Launch VR mode in either Unity or Unreal Engine

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.
### Mentor 
- [Himanshu Choudhari](https://github.com/Lightnin-8) - Senior Developer
### Core Contributors
- [Vaibhav Sonawane](https://github.com/yourusername) - Project Lead
- [Pratik Suryawanshi](https://github.com/suryawanshipratik003) - 3D Constructor
- [Prasad Sathe](https://github.com/teammember2) - VR Integration
- [Gokul Jadhav](https://github.com/teammember3) - 3D Workflow Development, Documentation & Testing
- [Zainab Khan](https://github.com/teammember4) - Documentation & Testing


### How to Contribute
1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 🙏 Acknowledgments

- Original authors of 3D-GAN and 3D-IWGAN
- NVIDIA for Instant-NGP
- PointCleanNet authors
- Three.js community
- Unity and Unreal Engine communities
- VR SDK providers (Oculus, SteamVR, etc.)

## 📧 Contact

For questions and support, please open an issue in the GitHub repository.
