#include<iostream>
using namespace std;

int main() {

	// ���巽ʽ1
	// �������� ������[Ԫ�ظ���];
	int score[10];

	// �����±긳ֵ
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	// �����±����
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;


	// �ڶ��ֶ��巽ʽ
	// �������� ������[Ԫ�ظ���] = {ֵ1��ֵ2 ��ֵ3 ...};
	// ���{}�ڲ���10�����ݣ�ʣ��������0��ȫ
	int score2[10] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };

	// ������
	// cout << score2[0] << endl;
	// cout << score2[1] << endl;

	// һ��һ�����̫�鷳����˿�������ѭ���������
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}

	// ���巽ʽ3
	// �������� ������[] =  {ֵ1��ֵ2 ��ֵ3 ...};
	int score3[] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };

	for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}

	// ��������;
	// 1�����Ի�ȡ��������ռ���ڴ�ռ��С
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

	// 2������ͨ����������ȡ�������׵�ַ
	cout << "�����׵�ַΪ�� " << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << (int)&arr[1] << endl;

	// arr = 100; �����������ǳ�������˲����Ը�ֵ

	// ð������
	int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };

	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}