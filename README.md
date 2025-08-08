# Image Blurring with OpenCV

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![OpenCV](https://img.shields.io/badge/OpenCV-5C3EE8?style=for-the-badge&logo=OpenCV&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-008FBA?style=for-the-badge&logo=CMake&logoColor=white)

---

## 📌 Project Overview

This is a simple image blurring project using **OpenCV** and **C++**, intended as a learning exercise to explore image processing fundamentals and build confidence in using OpenCV.

The project applies a **Gaussian blur** to an input image and outputs the result. It also displays both the original and blurred image side by side.

---

## ✨ Key Features

- 📷 Load and process images with OpenCV
- 🌫️ Apply a Gaussian Blur filter
- 💾 Save the blurred output as a new image
- 🖼️ Show original and blurred images using OpenCV GUI
- ⚙️ Build system powered by CMake

---

## 🚀 Getting Started

### Prerequisites

- OpenCV installed on your machine
- CMake
- A C++ compiler (MSVC, GCC, Clang, etc.)

---

### 🛠️ Building the Project

```bash
git clone https://github.com/<your-username>/image_blur_project.git
cd image_blur_project
mkdir build
cd build
cmake ..
cmake --build .
```
🖼️ Usage
Run the program with an input image path:

# From the build directory (adjust for your compiler/debug settings)
.\Debug\image_blur.exe ..\test_img.png

Notes:

The output file will be saved as blurred_output.png in your current working directory.

The program opens two OpenCV windows: one for the original and one for the blurred image.

Press any key in the image window to close the program.

📚 Next Steps
This project sets the stage for future work on:

🔄 CUDA-based GPU blurring

🎛️ Custom kernel filters

⚡ Performance comparisons (CPU vs. GPU)

📝 License
MIT License. See LICENSE for details.
