#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// ���� �ҷ�����
	VideoCapture capture("video/test.mp4");
	Mat frame;

	// �Ӽ� ����
	int askFileTypeBox = 0;
	int Color = 1;
	Size S = Size((int)capture.get(CV_CAP_PROP_FRAME_WIDTH),
		(int)capture.get(CV_CAP_PROP_FRAME_HEIGHT));


	VideoWriter outVideo;
	// #1 ���� ���� ���
	// #2 �ڵ��ڽ� ����� �ȶ����, 
	// #3 ��������� 1�ʿ� ���������� �ӵ��� �����Ұ����� -> ����� ���� ���� �״��
	// #4 ���� ũ�� -> �̰͵� ������ �״��
	// #5 Į�� or ���
	outVideo.open("video/outVideo.avi", askFileTypeBox, capture.get(CV_CAP_PROP_FPS), S, Color);

	// ����ó��
	if (!capture.isOpened()) {
		printf("Video file not open.\n");
		return 0;
	}

	// ������â ����
	namedWindow("w");

	while (1) {

		// �������� ���������� frame���� �Ѱ���.
		capture >> frame;

		if (frame.empty()) 
			break;
		
		// �Һ� ���� ó��
		Sobel(frame, frame, frame.depth(), 1, 0);
		outVideo.write(frame);
		
		// ������ ���
		imshow("w", frame);
		if (waitKey(10) > 0)
			break;
	}


	waitKey(0);

	return 0;

}