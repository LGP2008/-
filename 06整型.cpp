#include<iostream>
using namespace std;

int main6() {

//����
//1.������ (-32768~32767)
	short num1 = 10;
//2.���� (-2147483648~21474836747)
		int num2 = 10;
//3.������ (-2147483648~21474836747)
		long num3 = 10;
			//4.�������� ��-9,223,372,036,854,775,808~9,223,372,036,854,775,807��
			long long num4 = 10;

			cout << "num1=" << num1 << endl;
			cout << "num2=" << num2 << endl;
			cout << "num3=" << num3 << endl;
			cout << "num4=" << num4 << endl;
	system("pause");

	return 0;
}