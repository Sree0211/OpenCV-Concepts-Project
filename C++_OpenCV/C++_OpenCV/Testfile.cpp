#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;

/////// Web Cam  ////////

//int main()
//{
//	//string path = "Resources/test_video.mp4";
//	VideoCapture cap(0);
//	Mat img ;
//
//	while (true)
//	{
//		cap.read(img);
//		imshow("Image", img);
//		waitKey(1);
//	}
//	return 0;
//}

//// Video ////

void main()
{
	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true)
	{
		cap.read(img);
		
		try
		{
			imshow("Image", img);
			waitKey(20);
		}
		catch (Exception& e)
		{
			cerr << e.msg << endl;
		}
	}
	
}
