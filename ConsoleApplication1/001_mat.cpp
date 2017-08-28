#include<stdio.h>
#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;


void main() {

	// 3�� 3�� ¥�� Matrix ����
	// opencv���� �̹����� ���� ó���� Matrix�� �̿�.
	// ����° �Ű������� 32��Ʈ float�� ���� Matrix�� �ְڴٴ°�.
	Mat mtx(3, 3, CV_32F);

	// ���⼭ img(5,3)�� ���� �ڵ�� �ٸ��� 5�� 3���� �ƴ� �̹��� ũ��
	// ���� 5 ���� 3�̶�� �����ϸ�ȴ�.
	// ��ķε����� 3�� 5���ΰ��̴�.
	// ����° ���ڴ� 8��Ʈ Unsinged Charter 3ä���� Matrix�� �ְڴٴ°�.
	Mat img(Size(5, 3), CV_8UC3);
	

	Mat mtx2;
	mtx2 = Mat(10, 1, CV_64FC1);

	Mat * mtx3 = new Mat(3, 3, CV_32F);
	delete mtx3;

	// mtx�� ��� ��Ұ��� 10�� �ְڴٴ°�.
	mtx.setTo(10);
	cout << mtx << endl;

	// mtx2�� ��� ��Ұ��� 11�� �ְڴٴ°�.
	mtx2.setTo(11);
	cout << mtx2 << endl;


}