#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");

	// 이미지 픽셀에 접근하는 방법
	// -> 데이터로 접근
	// 가장 빠르지만 인덱스가 틀리면 오류가있을 수 있어 위험함.
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {

			unsigned char r, g, b;

			// step : 이미지의 가로 크기
			// elemSize : 한픽셀의 바이트 사이즈(채널 / 색상)
			b = img.data[i*img.step + j*img.elemSize() + 0];
			g = img.data[i*img.step + j*img.elemSize() + 1];
			r = img.data[i*img.step + j*img.elemSize() + 2];

			img.data[i*img.step + j*img.elemSize() + 0] = unsigned char(255 - b);
			img.data[i*img.step + j*img.elemSize() + 1] = unsigned char(255 - g);
			img.data[i*img.step + j*img.elemSize() + 2] = unsigned char(255 - r);
		}
	}

	imshow("img", img);
	waitKey(0);


	return 0;

}