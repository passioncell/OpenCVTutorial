#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	namedWindow("img", 1);
	Mat img = imread("images/test.jpg");

	// �̹��� �ȼ��� �����ϴ� ���
	// -> �����ͷ� ����
	// ���� �������� �ε����� Ʋ���� ���������� �� �־� ������.
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {

			unsigned char r, g, b;

			// step : �̹����� ���� ũ��
			// elemSize : ���ȼ��� ����Ʈ ������(ä�� / ����)
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