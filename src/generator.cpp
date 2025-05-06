#include <iostream>
#include <opencv2/core.hpp>
#include "functions.h" 

/**
 * @brief Generates a random color image of the specified dimensions.
 *
 * Creates an 8-bit, 3-channel (BGR format by default in OpenCV) image
 * and fills each pixel's channels with random values between 0 and 255.
 *
 * @param width The desired width of the image in pixels. Must be positive.
 * @param height The desired height of the image in pixels. Must be positive.
 * @return cv::Mat An OpenCV matrix representing the generated random image.
 * Returns an empty cv::Mat if width or height are not positive.
 */
 using namespace cv;
 using namespace std;
Mat generateRandomImage(int width, int height) {
  if (width <= 0 || height <= 0) {
    cerr << "Error: Image dimensions must be positive." << endl;
    return Mat(); // Return an empty Mat to indicate failure
  }

  // Create an 8-bit 3-channel BGR image (Height x Width)
  Mat randomImage(height, width, CV_8UC3);

  // Fill the image with random values (0-255 for each channel)
  randu(randomImage, Scalar(0, 0, 0), Scalar(255, 255, 255));

  return randomImage;
}
