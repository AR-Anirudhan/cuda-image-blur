// This program loads an image, applies a Gaussian blur, saves the blurred image to a new file,
// and displays both the original and blurred images.

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
    // Check if the user has provided an image file name as a command-line argument.
    // This is good practice to make the program more flexible.
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <Input_Image_Path>" << std::endl;
        std::cerr << "Example: " << argv[0] << " ..\\test_img.png" << std::endl;
        return -1;
    }

    // Attempt to load the image from the specified file path.
    // The argv[1] argument contains the path provided by the user.
    cv::Mat original_image = cv::imread(argv[1], cv::IMREAD_COLOR);

    // Check if the image was loaded successfully.
    if (original_image.empty()) {
        std::cerr << "Error: Could not open or find the image '" << argv[1] << "'!" << std::endl;
        std::cerr << "Please make sure the image file exists and the path is correct." << std::endl;
        return -1;
    }

    std::cout << "Image '" << argv[1] << "' loaded successfully." << std::endl;
    std::cout << "Dimensions: " << original_image.cols << "x" << original_image.rows << std::endl;

    // Create a new Mat object to store the blurred image.
    cv::Mat blurred_image;

    // Apply a Gaussian blur.
    // The size of the kernel (e.g., cv::Size(21, 21)) determines the amount of blur.
    // Larger values result in more blur. The last argument is sigma, a standard deviation in x and y.
    cv::GaussianBlur(original_image, blurred_image, cv::Size(21, 21), 0, 0);

    // Define the filename for the output image.
    const std::string output_filename = "blurred_output.png";

    // Save the blurred image to a new file.
    // This will create a file named "blurred_output.png" in the same directory
    // from which the program is executed.
    bool success = cv::imwrite(output_filename, blurred_image);

    if (success) {
        std::cout << "Successfully saved blurred image to '" << output_filename << "'" << std::endl;
    } else {
        std::cerr << "Error: Failed to save the blurred image to '" << output_filename << "'" << std::endl;
    }

    // Display both the original and blurred images for comparison.
    // The windows will only appear if you are running this in a graphical environment.
    cv::imshow("Original Image", original_image);
    cv::imshow("Blurred Image", blurred_image);

    // Wait for the user to press any key before the program closes.
    // This keeps the display windows open.
    std::cout << "Press any key to exit the program." << std::endl;
    cv::waitKey(0);

    return 0;
}
