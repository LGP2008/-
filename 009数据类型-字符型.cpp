#include <iostream>
using namespace std;

int main9() {

	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ��С" << sizeof(char) << endl;
	//3.�ַ��ͱ�����������
	//char ch2 = "b"; �����ַ��ͱ���ʱ��Ҫ�õ�����
	// char ch3 = 'ab'; �����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�
	//4.�ַ��ͱ�����ӦASCII����
	//a-97
	//A-65
    	cout << (int)ch << endl;//�鿴a��Ӧ��ASCII��




	system("pause");

	return 0;
}