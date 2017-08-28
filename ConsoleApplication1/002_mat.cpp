#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {

	//ones�� ��� ��Ұ��� ���� 1�� �ʱ�ȭ
	// ::�� Class���� static Method ȣ���Ҷ� �����ϴ� ��������.
	Mat m = Mat::ones(3, 3, CV_64F);
	
	//��� m�� ��Į�� ��
	m = m * 3;

	cout << m << endl << endl;

	double dm[3][3] = { {1,2,1}, {0, 1, 1}, {1, 0, 0} };
	//m2 ����� dm��İ����� �ʱ�ȭ
	Mat m2 = Mat(3, 3, CV_64F, dm);
	cout << m2 << endl << endl;

	// MAT ����
	cout << m + m2 << endl << endl;

	cout << m - m2 << endl << endl;

	// ��Į�� ���� >> m.mul(m2)
	cout << m * m2 << endl << endl;
	
	cout << m / m2 << endl << endl;

	cout << m.inv() << endl << endl;
}