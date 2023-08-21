#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////////Resize and crop//////////////////////

void main() {

	string path = "Resources/My_pic.jpg";
	Mat img = imread(path);
	Mat imgResize,imgCrop;

	/// cout << img.size() << endl; ///776 x 1008
	resize(img, imgResize, Size(),0.5,0.5);
	Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);


	imshow("Image", img);
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);
	
	waitKey(0);

}