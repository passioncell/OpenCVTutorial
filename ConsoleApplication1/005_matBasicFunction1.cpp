#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {


	Mat img = imread("images/test.jpg");
	
	// �̹��� ���� ���� ��Ű�� �Լ�
	bitwise_not(img, img);

	// img�� "����"�ϹǷ� img_s�� ������ �����.
	// img_s�� �ٽ� �����ϸ� img�� �ٽ� �����Ǿ� �Ѵ� ���� �������� ����.
	Mat img_s = img;
	bitwise_not(img_s, img_s);

	imshow("img", img);
	imshow("img_s", img_s);

	waitKey(0);


	return 0;

}