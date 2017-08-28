#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// 이미지 LOAD
	Mat img = imread("images/test.jpg");

	// 005_matBasicFunction1.cpp 에서는 원본이미지를 "참조" 했지만
	// 여기선 Clone하여 사용해본다.
	// Call-By-Value와 Call-By-Ref와 같은 이치.
	Mat img2 = img.clone();

	// img의 색을 반전
	bitwise_not(img, img);



	imshow("img", img);
	// img를 색반전시켜도 img2은 영향이 없다. 
	imshow("img2", img2);


	waitKey(0);


	return 0;

}