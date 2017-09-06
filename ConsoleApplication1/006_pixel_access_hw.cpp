#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");

	

	imshow("img", img);
	waitKey(0);


	return 0;

}