#include<iostream>
using namespace std;

int main() {

	//单精度  float
	//双精度  double
	//默认情况下 输出一个小数，会显示出6位有效数字
	float f1 = 3.14f;
		cout << "f1=" << f1 << endl;
		double d1 = 3.14;
		cout << "d1=" << d1 << endl;

	//统计float和double所占内存空间
		cout << "float占用空间是" << sizeof(float) << endl;
		cout << "double占用空间是" << sizeof(double) << endl;
		cout << "f1占用空间是" << sizeof(f1) << endl;
		cout << "d1占用空间是" << sizeof(d1) << endl;
		//科学计数法
		float f2 = 3e2; //3*10^2
		cout << "f2=" << f2 << endl;
		float f3 = 3e-2; //3*10^-2       3*0.1^2
		cout << "f3=" << f3 << endl;


	system("pause");

	return 0;
}