#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {
	
	// 창을 생성
	// 원본 이미지를 띄울 창, 필터를 적용할 이미지를 띄울 창.
	namedWindow("img1_window", 0);
	namedWindow("img2_window", 0);

	// 원본 이미지 로드
	Mat img = imread("images/003.jpg");
	
	// 원본 이미지에 필터를 입힐 이미지
	Mat img2;
	
	//이미지 Sobel 필터 처리
	Sobel(img, img2, img.depth(), 1, 0);

	

	//만들어놓은 창을 이용하여 이미지 SHOW
	imshow("img1_window", img);
	imshow("img2_window", img2);

	//키입력값을 기다리는 함수(이미지 창 안닫히도록)
	waitKey(0);

	//모든 창을 닫아버림.
	destroyAllWindows();

}