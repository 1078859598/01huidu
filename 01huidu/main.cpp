#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat srcMat = imread("C:/Users/HS/Desktop/2.jpg", 0);
	imshow("src", srcMat);
	waitKey(0);
	return 0;
}