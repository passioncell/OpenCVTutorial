#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// 이미지 LOAD
	Mat img = imread("images/test.jpg");

	// copyTo #1
	Mat cimg;
	img.copyTo(cimg);

	// copyTo #2
	Mat cimg2;
	img.copyTo(cimg2);

	// cimg의 크기에 가로가 2배인(세로는 같음) 이미지 생성
	// copy1과 copy2를 복사해서 가로로 이어붙일 큰 사진
	Mat canvas(Size(img.cols * 2, img.rows), img.type());
	
	// 흰색으로 캔버스 채움.
	canvas.setTo(255);

	// cimg과 cimg2를 복사해서 canvas에 복사해서 붙여넣는다. 
	// Range(범위)는 행은 처음부터(=all) 열같은 경우는
	// cimg는 0부터 cimg가로크기까지
	// cimg2는 cimg가로크기부터 cimg2 가로크기의 2배 까지
	cimg.copyTo(canvas(Range::all(), Range(0, cimg.cols)));
	cimg2.copyTo(canvas(Range::all(), Range(cimg2.cols, cimg2.cols * 2)));

	imshow("canvas", canvas);

	waitKey(0);


	return 0;

}