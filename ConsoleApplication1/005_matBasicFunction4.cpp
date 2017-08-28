#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// �̹��� LOAD
	Mat img = imread("images/test.jpg");

	// copyTo #1
	Mat cimg;
	img.copyTo(cimg);

	// copyTo #2
	Mat cimg2;
	img.copyTo(cimg2);

	// cimg�� ũ�⿡ ���ΰ� 2����(���δ� ����) �̹��� ����
	// copy1�� copy2�� �����ؼ� ���η� �̾���� ū ����
	Mat canvas(Size(img.cols * 2, img.rows), img.type());
	
	// ������� ĵ���� ä��.
	canvas.setTo(255);

	// cimg�� cimg2�� �����ؼ� canvas�� �����ؼ� �ٿ��ִ´�. 
	// Range(����)�� ���� ó������(=all) ������ ����
	// cimg�� 0���� cimg����ũ�����
	// cimg2�� cimg����ũ����� cimg2 ����ũ���� 2�� ����
	cimg.copyTo(canvas(Range::all(), Range(0, cimg.cols)));
	cimg2.copyTo(canvas(Range::all(), Range(cimg2.cols, cimg2.cols * 2)));

	imshow("canvas", canvas);

	waitKey(0);


	return 0;

}