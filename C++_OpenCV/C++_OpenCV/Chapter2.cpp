#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////////// Images //////////////////////

void main() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGray;
	Mat imgBlur,imgCanny,imgErode,imgDialation;

	cvtColor(img, imgGray, COLOR_BGR2GRAY); //this command is used to convert from one color pallette to another
	GaussianBlur(img, imgBlur, Size(5, 5), 7, 0);
	Canny(imgBlur, imgCanny, 25, 70);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDialation,kernel);
	

	imshow("Image", img);
	//imshow("Image_Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dialation", imgDialation);
	waitKey(0);

}