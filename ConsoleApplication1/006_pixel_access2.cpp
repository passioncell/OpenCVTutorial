#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");

	cout << img.elemSize() << endl;
	cout << img.channels() << endl;
	cout << img.rows << endl;
	cout << img.step << endl;

	// 이미지 픽셀에 접근하는 방법
	// -> "at"을 이용한 접근
	// 이미지 세로 크기의 10분의 7 만큼부터 10분의 8크기까지만 반전
	for (int i = (img.rows / 10)* 7; i < (img.rows / 10) *8 ; i++) {
		for (int j = 0; j < img.cols; j++) {

			unsigned char r, g, b;

			// Vec3d -> unsigned char 3채널
			// i행 j열의 [N]번 인덱스값을 가져옴.
			b = img.at< cv :: Vec3b>(i, j)[0];
			g = img.at< cv ::Vec3b>(i, j)[1];
			r = img.at< cv ::Vec3b>(i, j)[2];

			// 색 반전
			img.at< cv ::Vec3b>(i, j)[0] = unsigned char(255 - b);
			img.at< cv ::Vec3b>(i, j)[1] = unsigned char(255 - g);
			img.at< cv ::Vec3b>(i, j)[2] = unsigned char(255 - r);
		}
	}

	imshow("img", img);
	waitKey(0);


	return 0;

}