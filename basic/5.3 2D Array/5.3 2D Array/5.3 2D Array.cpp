#include<iostream>
#include<string>
using namespace std;

int main() {

	// ��ʽ1  
	// �������� ������ [����][����]
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// ��ʽ2 
	// �������� ������[����][����] = { { ����1������2 }��{ ����3������4 } };
	int arr2[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	// ��ʽ3
	// �������� ������[����][����] = { ����1������2������3������4  };
	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };

	// ��ʽ4 
	// �������� ������[][����] = { ����1������2������3������4  };
	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };

	cout << "��ά�����С�� " << sizeof(arr) << endl;
	cout << "��ά����һ�д�С�� " << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�ش�С�� " << sizeof(arr[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// ��ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;

	int scores[3][3] =
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80},
	};

	string names[3] = { "����", "����", "����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "ͬѧ�ܳɼ�Ϊ�� " << sum << endl;
	}

	system("pause");

	return 0;
}