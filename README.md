# Image Blurring with CUDA and OpenCV

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CUDA](https://img.shields.io/badge/CUDA-FE8A2B?style=for-the-badge&logo=CUDA&logoColor=white)
![OpenCV](https://img.shields.io/badge/OpenCV-5C3EE8?style=for-the-badge&logo=OpenCV&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-008FBA?style=for-the-badge&logo=CMake&logoColor=white)

## 📌 Project Overview

This is a foundational project for exploring **GPU programming** and **parallel computing** using **CUDA C++** and **OpenCV**. The primary objective is to implement a 2D image filter (specifically, a **box blur**) on the GPU to understand the core concepts of parallel processing and GPU memory management.

This project was created as a hands-on learning exercise to build strong fundamentals before diving into more advanced machine learning and deep learning acceleration techniques.

## ✨ Key Features

* **Image Processing with OpenCV**: Utilizes the OpenCV library to load and handle images.
* **CUDA Kernel Implementation**: Contains a custom CUDA kernel written in C++ to apply a 2D box blur filter in parallel.
* **CPU vs. GPU Performance**: The project is structured to allow for a comparison of execution times between a CPU-based and GPU-based image blurring algorithm.
* **Flexible Build System**: Uses CMake to easily configure the project and build it on different platforms.

## 🚀 Getting Started

### Prerequisites

* A CUDA-enabled GPU
* NVIDIA CUDA Toolkit
* OpenCV Library
* CMake
* A C++ compiler (e.g., MSVC, GCC)

### Building the Project

1.  Clone the repository:
    ```bash
    git clone [https://github.com/](https://github.com/)<your-username>/image_blur_project.git
    cd image_blur_project
    ```
2.  Create a `build` directory and navigate into it:
    ```bash
    mkdir build
    cd build
    ```
3.  Run CMake to configure the project. Make sure to specify the path to your OpenCV installation if it's not in a standard location.
    ```bash
    cmake -DOpenCV_DIR="C:/path/to/your/OpenCV/build" ..
    ```
4.  Build the project:
    ```bash
    cmake --build .
    ```

### Usage

To run the executable, provide the path to your input image as a command-line argument.

```bash
# From the build directory
.\Debug\image_blur.exe ..\test_img.png
