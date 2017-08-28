#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// �̹��� LOAD
	Mat img = imread("images/test.jpg");

	// �簢�� ������ �����
	// (���� = img�� ���� ũ���� 1/4) , (���� = img�� ���� ũ���� 1/4) 
	// (���� ���� ������ ������ = img�� ����ũ���� 1/2)
	// (���� ���� ������ ������ = img�� ���� ũ���� 1/2) 
	Rect r(img.cols / 4, img.rows / 4, img.cols / 4 * 2, img.rows / 4 * 2);
	// �簢�� ũ�� ���
	cout << r << endl;

	// Clone #2
	// �簢�� ũ�⸸ŭ�� img���� clone�Ͽ� img2�� ����.
	Mat img2 = img(r).clone();

	imshow("img", img);
	imshow("img2", img2);

	waitKey(0);


	return 0;

}