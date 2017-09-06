#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");



	imshow("img", img);

	// �̹����� �����ϴ� �Լ� -> imwrite ���˺�ȯ �ڵ�����!
	imwrite("images/save_test1.jpg", img);
	imwrite("images/save_test1.bmp", img);
	imwrite("images/save_test1.tif", img);
	imwrite("images/save_test1.png", img);

	waitKey(0);




	return 0;

}