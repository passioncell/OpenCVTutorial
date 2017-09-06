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

	// �̹��� �ȼ��� �����ϴ� ���
	// -> "at"�� �̿��� ����
	// �̹��� ���� ũ���� 10���� 7 ��ŭ���� 10���� 8ũ������� ����
	for (int i = (img.rows / 10)* 7; i < (img.rows / 10) *8 ; i++) {
		for (int j = 0; j < img.cols; j++) {

			unsigned char r, g, b;

			// Vec3d -> unsigned char 3ä��
			// i�� j���� [N]�� �ε������� ������.
			b = img.at< cv :: Vec3b>(i, j)[0];
			g = img.at< cv ::Vec3b>(i, j)[1];
			r = img.at< cv ::Vec3b>(i, j)[2];

			// �� ����
			img.at< cv ::Vec3b>(i, j)[0] = unsigned char(255 - b);
			img.at< cv ::Vec3b>(i, j)[1] = unsigned char(255 - g);
			img.at< cv ::Vec3b>(i, j)[2] = unsigned char(255 - r);
		}
	}

	imshow("img", img);
	waitKey(0);


	return 0;

}