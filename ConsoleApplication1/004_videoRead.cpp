#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {
	
	// ���� ���� (������, ����� ��� ����)
	// ��ķ�� ����ҽ� VideoCapture captrue() ���.
	VideoCapture cap("video/test.mp4");
	// ������ �� �������� ������ ��ü
	Mat frame;

	// ������ ������ ����� ���ȴ��� Ȯ��.
	if (!cap.isOpened()) {
		printf("���� ���� ����.\n");
		return -1;
	}

	// �������� ������ â ����. �̸��� video
	namedWindow("video");
	
	while(true){

		// ���� ������ ����
		cap >> frame;
		// ������������ ���ٸ� ���� Ż��.
		if (frame.empty()) {
			break;
		}

		// ������ ���������� ������.
		imshow("video", frame);

		// 30�и������尡 ���������� ���� �������� �����ش�.
		if (waitKey(30) >= 0)
			break;
	}

	return 0;

}