#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// �̹��� LOAD
	Mat img = imread("images/test.jpg");

	// 005_matBasicFunction1.cpp ������ �����̹����� "����" ������
	// ���⼱ Clone�Ͽ� ����غ���.
	// Call-By-Value�� Call-By-Ref�� ���� ��ġ.
	Mat img2 = img.clone();

	// img�� ���� ����
	bitwise_not(img, img);



	imshow("img", img);
	// img�� ���������ѵ� img2�� ������ ����. 
	imshow("img2", img2);


	waitKey(0);


	return 0;

}