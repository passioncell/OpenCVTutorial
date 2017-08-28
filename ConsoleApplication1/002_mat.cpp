#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(void) {

	//ones는 행렬 요소값을 전부 1로 초기화
	// ::은 Class에서 static Method 호출할때 참조하는 참조변수.
	Mat m = Mat::ones(3, 3, CV_64F);
	
	//행렬 m에 스칼라 곱
	m = m * 3;

	cout << m << endl << endl;

	double dm[3][3] = { {1,2,1}, {0, 1, 1}, {1, 0, 0} };
	//m2 행렬을 dm행렬값으로 초기화
	Mat m2 = Mat(3, 3, CV_64F, dm);
	cout << m2 << endl << endl;

	// MAT 연산
	cout << m + m2 << endl << endl;

	cout << m - m2 << endl << endl;

	// 스칼라 곱은 >> m.mul(m2)
	cout << m * m2 << endl << endl;
	
	cout << m / m2 << endl << endl;

	cout << m.inv() << endl << endl;
}