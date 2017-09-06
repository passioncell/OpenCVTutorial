#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void) {

	// 파일 불러오기
	VideoCapture capture("video/test.mp4");
	Mat frame;

	// 속성 설정
	int askFileTypeBox = 0;
	int Color = 1;
	Size S = Size((int)capture.get(CV_CAP_PROP_FRAME_WIDTH),
		(int)capture.get(CV_CAP_PROP_FRAME_HEIGHT));


	VideoWriter outVideo;
	// #1 만들 영상 경로
	// #2 코덱박스 띄울지 안띄울지, 
	// #3 영상저장시 1초에 몇프레임의 속도로 저장할것인지 -> 현재는 원본 영상 그대로
	// #4 영상 크기 -> 이것도 원본과 그대로
	// #5 칼라 or 흑백
	outVideo.open("video/outVideo.avi", askFileTypeBox, capture.get(CV_CAP_PROP_FPS), S, Color);

	// 예외처리
	if (!capture.isOpened()) {
		printf("Video file not open.\n");
		return 0;
	}

	// 윈도우창 생성
	namedWindow("w");

	while (1) {

		// 동영상의 한프레임을 frame으로 넘겨줌.
		capture >> frame;

		if (frame.empty()) 
			break;
		
		// 소벨 필터 처리
		Sobel(frame, frame, frame.depth(), 1, 0);
		outVideo.write(frame);
		
		// 프레임 출력
		imshow("w", frame);
		if (waitKey(10) > 0)
			break;
	}


	waitKey(0);

	return 0;

}