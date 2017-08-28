#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {
	
	// â�� ����
	// ���� �̹����� ��� â, ���͸� ������ �̹����� ��� â.
	namedWindow("img1_window", 0);
	namedWindow("img2_window", 0);

	// ���� �̹��� �ε�
	Mat img = imread("images/003.jpg");
	
	// ���� �̹����� ���͸� ���� �̹���
	Mat img2;
	
	//�̹��� Sobel ���� ó��
	Sobel(img, img2, img.depth(), 1, 0);

	

	//�������� â�� �̿��Ͽ� �̹��� SHOW
	imshow("img1_window", img);
	imshow("img2_window", img2);

	//Ű�Է°��� ��ٸ��� �Լ�(�̹��� â �ȴ�������)
	waitKey(0);

	//��� â�� �ݾƹ���.
	destroyAllWindows();

}