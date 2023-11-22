#include "ImageProcessing/image_io.h"

#include <gtest/gtest.h>

TEST(ImageLoadingTest, ImageFileDoesNotExist) {
  const std::string nonExistentFile = "non_existent_image.png";
  int** pixels = loadImagePixels(nonExistentFile);
  EXPECT_EQ(pixels, nullptr);
}

TEST(ImageLoadingTest, ImageLoadedCorrectly) {
  const std::string imageFile = "test/bw.png";
  int** pixels = loadImagePixels(imageFile);

  ASSERT_NE(pixels, nullptr) << "Failed to load the image.";
  EXPECT_EQ(pixels[0][0], 0) << "Mismatch in pixel 0,0";
  EXPECT_EQ(pixels[0][1], 255) << "Mismatch in pixel 0,1";

  // Clean up and deallocate memory for pixels
  // Add the cleanup code for pixels here
}
