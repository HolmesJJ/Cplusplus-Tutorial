#include<iostream>
using namespace std;

int main() {

	// ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	int * p1 = NULL;

	// ���ʿ�ָ�뱨��
	// �ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	cout << *p1 << endl;

	// ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int * p2 = (int *)0x1100;

	// ����Ұָ�뱨��
	cout << *p2 << endl;

	system("pause");

	return 0;
}
