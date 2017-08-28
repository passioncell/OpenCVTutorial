#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// 이미지 LOAD
	Mat img = imread("images/test.jpg");

	// 사각형 영역을 만든다
	// (가로 = img의 열의 크기의 1/4) , (세로 = img의 행의 크기의 1/4) 
	// (가로 에서 이정도 떨어진 = img의 열의크기의 1/2)
	// (세로 에서 이정도 떨어진 = img의 행의 크기의 1/2) 
	Rect r(img.cols / 4, img.rows / 4, img.cols / 4 * 2, img.rows / 4 * 2);
	// 사각형 크기 출력
	cout << r << endl;

	// Clone #2
	// 사각형 크기만큼만 img에서 clone하여 img2에 적용.
	Mat img2 = img(r).clone();

	imshow("img", img);
	imshow("img2", img2);

	waitKey(0);


	return 0;

}