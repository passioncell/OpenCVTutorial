#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {
	
	// 파일 열기 (절대경로, 상대경로 모두 가능)
	// 웹캠을 사용할시 VideoCapture captrue() 사용.
	VideoCapture cap("video/test.mp4");
	// 영상의 한 프레임을 저장할 객체
	Mat frame;

	// 동영상 파일이 제대로 열렸는지 확인.
	if (!cap.isOpened()) {
		printf("파일 열기 실패.\n");
		return -1;
	}

	// 동영상을 보여줄 창 생성. 이름은 video
	namedWindow("video");
	
	while(true){

		// 다음 프레임 저장
		cap >> frame;
		// 다음프레임이 없다면 루프 탈출.
		if (frame.empty()) {
			break;
		}

		// 동영상 한프레임을 보여줌.
		imshow("video", frame);

		// 30밀리세컨드가 지날때마다 다음 프레임을 보여준다.
		if (waitKey(30) >= 0)
			break;
	}

	return 0;

}