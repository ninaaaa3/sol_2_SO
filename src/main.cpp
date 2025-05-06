#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <chrono>
#include "functions.h" 

using namespace cv;
using namespace std::chrono;
using namespace std;

int main(int argc, char **argv) {
    int imageWidth = 1220;
    int imageHeight = 1280;
    Mat myRandomImage;
  
    auto start = high_resolution_clock::now();
  
    for (int i = 50; i>0; i--) {
      cout << "Generating a " << imageWidth << "x" << imageHeight
                << " random image..." << endl;
    
      myRandomImage = generateRandomImage(imageWidth, imageHeight);
    }
  
    auto end = high_resolution_clock::now();
  
    auto duration = duration_cast<microseconds>(end - start);
  
    cout << "Duración (ms): "<< duration.count() << endl;
  
      if (!myRandomImage.empty()) {
        cout
            << "Random image generated successfully (stored in myRandomImage)."
            << endl;
        // Display the image and wait for enter
        imshow("Random Image", myRandomImage);
        waitKey(0); // Wait for a key press indefinitely
      } else {
        cerr << "Failed to generate the random image." << endl;
        return 1;
      }
  
    return 0;
  }