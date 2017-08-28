#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {


	Mat img = imread("images/test.jpg");
	
	// 이미지 색상 반전 시키는 함수
	bitwise_not(img, img);

	// img를 "참조"하므로 img_s도 반전이 적용됨.
	// img_s를 다시 반전하면 img도 다시 반전되어 둘다 원래 색상으로 나옴.
	Mat img_s = img;
	bitwise_not(img_s, img_s);

	imshow("img", img);
	imshow("img_s", img_s);

	waitKey(0);


	return 0;

}