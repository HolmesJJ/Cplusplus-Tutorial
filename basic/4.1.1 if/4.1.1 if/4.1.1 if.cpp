#include<iostream>
using namespace std;

int main() {

	int score = 0;

	cout << "�����뿼�Է�����" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "�ҿ����˱���" << endl;
		}
		else if (score > 650)
		{
			cout << "�ҿ������廪" << endl;
		}
		else
		{
			cout << "�ҿ������˴�" << endl;
		}

	}
	else if (score > 500)
	{
		cout << "�ҿ����˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "�ҿ�����������ѧ" << endl;
	}
	else
	{
		cout << "��δ���ϱ���" << endl;
	}

	system("pause");

	return 0;
}