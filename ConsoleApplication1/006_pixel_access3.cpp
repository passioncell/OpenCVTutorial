#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");


	// 이미지 픽셀에 접근하는 방법
	// -> "ptr"을 이용한 접근
	// 이미지 세로 크기의 10분의 5 만큼부터 10분의 6크기까지만 반전
	for (int i = (img.rows / 10) * 5; i < (img.rows / 10) * 6; i++) {
		cv::Vec3b* ptr = img.ptr<cv::Vec3b>(i);

		for (int j = 0; j < img.cols; j++) {
			

			cv::Vec3b bgr = ptr[j];
			unsigned char b1 = (bgr[0]);
			unsigned char g1 = (bgr[1]);
			unsigned char r1 = (bgr[2]);

			ptr[j] = cv::Vec3b(255 - b1, 255 - g1, 255 - r1);

		}
	}

	imshow("img", img);
	waitKey(0);


	return 0;

}