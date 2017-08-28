#include<stdio.h>
#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;


void main() {

	// 3행 3열 짜리 Matrix 생성
	// opencv에서 이미지나 영상 처리는 Matrix를 이용.
	// 세번째 매개변수는 32비트 float형 값을 Matrix에 넣겠다는것.
	Mat mtx(3, 3, CV_32F);

	// 여기서 img(5,3)은 위의 코드와 다르게 5행 3열이 아닌 이미지 크기
	// 가로 5 세로 3이라고 생각하면된다.
	// 행렬로따지면 3행 5열인것이다.
	// 세번째 인자는 8비트 Unsinged Charter 3채널을 Matrix에 넣겠다는것.
	Mat img(Size(5, 3), CV_8UC3);
	

	Mat mtx2;
	mtx2 = Mat(10, 1, CV_64FC1);

	Mat * mtx3 = new Mat(3, 3, CV_32F);
	delete mtx3;

	// mtx의 모든 요소값에 10을 넣겠다는것.
	mtx.setTo(10);
	cout << mtx << endl;

	// mtx2의 모든 요소값에 11을 넣겠다는것.
	mtx2.setTo(11);
	cout << mtx2 << endl;


}