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

	// 이미지 픽셀에 접근하는 방법
	// -> "iteration"을 이용한 접근
	
	cv::MatIterator_< cv::Vec3b> itd = img.begin<cv::Vec3b>(), itd_end = img.end<cv::Vec3b>();

	for (int i = 0; itd != itd_end; ++itd, ++i) {
		cv::Vec3b bgr = (*itd);

		(*itd)[0] = 255 - bgr[0];
		(*itd)[1] = 255 - bgr[1];
		(*itd)[2] = 255 - bgr[2];
	}

	imshow("img", img);
	waitKey(0);


	return 0;

}