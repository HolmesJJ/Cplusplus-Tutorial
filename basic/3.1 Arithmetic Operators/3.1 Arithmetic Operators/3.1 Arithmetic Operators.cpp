#include<iostream>
using namespace std;

int main() {

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  // ����������������Ȼ������
	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;
	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	// cout << a3 / b3 << endl; // ��������������Ϊ0
	// cout << a3 % b3 << endl; // ȡģ����ʱ������Ҳ����Ϊ0

	// ����С���������
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	// ����С��������ȡģ
	// cout << d1 % d2 << endl;

	// ���õ���
	int a = 10;
	a++; // �ȼ���a = a + 1
	cout << a << endl; // 11

	// ǰ�õ���
	int b = 10;
	++b;
	cout << b << endl; // 11

	// ����
	// ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int a4 = 10;
	int b4 = ++a4 * 10;
	cout << b4 << endl;

	// ���õ����ȼ�����ʽ����Ա�������++
	int a5 = 10;
	int b5 = a5++ * 10;
	cout << b5 << endl;

	system("pause");

	return 0;
}
