cmake_minimum_required(VERSION 3.20)
project(CudaImageBlur LANGUAGES CXX CUDA)

find_package(OpenCV REQUIRED)

add_executable(image_blur main.cpp)
target_link_libraries(image_blur ${OpenCV_LIBS})