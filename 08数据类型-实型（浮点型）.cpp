#include<iostream>
using namespace std;

int main() {

	//������  float
	//˫����  double
	//Ĭ������� ���һ��С��������ʾ��6λ��Ч����
	float f1 = 3.14f;
		cout << "f1=" << f1 << endl;
		double d1 = 3.14;
		cout << "d1=" << d1 << endl;

	//ͳ��float��double��ռ�ڴ�ռ�
		cout << "floatռ�ÿռ���" << sizeof(float) << endl;
		cout << "doubleռ�ÿռ���" << sizeof(double) << endl;
		cout << "f1ռ�ÿռ���" << sizeof(f1) << endl;
		cout << "d1ռ�ÿռ���" << sizeof(d1) << endl;
		//��ѧ������
		float f2 = 3e2; //3*10^2
		cout << "f2=" << f2 << endl;
		float f3 = 3e-2; //3*10^-2       3*0.1^2
		cout << "f3=" << f3 << endl;


	system("pause");

	return 0;
}