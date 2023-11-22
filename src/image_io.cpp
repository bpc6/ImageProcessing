#include "ImageProcessing/image_io.h"

#include <opencv2/opencv.hpp>

int** loadImagePixels(const std::string& imageFileName) {
  // Read the image
  cv::Mat image = cv::imread(imageFileName, cv::IMREAD_GRAYSCALE);

  if (image.empty()) {
    std::cerr << "Error: Unable to read the image." << std::endl;
    return nullptr;
  }

  // Get image dimensions
  int rows = image.rows;
  int cols = image.cols;

  // Create a 2D array to store pixel values
  int** pixels = new int*[rows];
  for (int i = 0; i < rows; ++i) {
    pixels[i] = new int[cols];
  }

  // Copy pixel values from the OpenCV matrix to the 2D array
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      pixels[i][j] = static_cast<int>(image.at<uchar>(i, j));
    }
  }
  return pixels;
}
