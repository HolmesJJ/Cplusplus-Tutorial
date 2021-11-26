#include<iostream>
#include<string>
using namespace std;

#define MAX 1000 // �������

// ��ϵ�˽ṹ��
struct Person
{
	string m_Name;  // ����
	int m_Sex;      // �Ա�1�� 2Ů
	int m_Age;      // ����
	string m_Phone; // �绰
	string m_Addr;  // סַ
};

// ͨѶ¼�ṹ��
struct AddressBook
{
	struct Person personArray[MAX]; // ͨѶ¼�б������ϵ������
	int m_Size; // ͨѶ¼����Ա����
};

// 1�������ϵ����Ϣ
void addPerson(AddressBook *ab)
{
	// �жϵ绰���Ƿ�����
	if (ab->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		// ����
		string name;
		cout << "������������" << endl;
		cin >> name;
		ab->personArray[ab->m_Size].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		// �Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[ab->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		// ����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		ab->personArray[ab->m_Size].m_Age = age;

		// ��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		ab->personArray[ab->m_Size].m_Phone = phone;

		// ��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		ab->personArray[ab->m_Size].m_Addr = address;

		// ����ͨѶ¼����
		ab->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

// 2����ʾ������ϵ����Ϣ
void showPerson(AddressBook * ab)
{
	if (ab->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < ab->m_Size; i++)
		{
			cout << "������" << ab->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (ab->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << ab->personArray[i].m_Age << "\t";
			cout << "�绰��" << ab->personArray[i].m_Phone << "\t";
			cout << "סַ��" << ab->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

// �ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
int isExist(AddressBook * ab, string name)
{
	for (int i = 0; i < ab->m_Size; i++)
	{
		if (ab->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

// 3��ɾ��ָ����ϵ����Ϣ
void deletePerson(AddressBook * ab)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(ab, name);
	if (ret != -1)
	{
		for (int i = ret; i < ab->m_Size; i++)
		{
			ab->personArray[i] = ab->personArray[i + 1];
		}
		ab->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

// 4������ָ����ϵ����Ϣ
void findPerson(AddressBook * ab)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(ab, name);
	if (ret != -1)
	{
		cout << "������" << ab->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << ab->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << ab->personArray[ret].m_Age << "\t";
		cout << "�绰��" << ab->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << ab->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

// 5���޸�ָ����ϵ����Ϣ
void modifyPerson(AddressBook * ab)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(ab, name);
	if (ret != -1)
	{
		// ����
		string name;
		cout << "������������" << endl;
		cin >> name;
		ab->personArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		// �Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		// ����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		ab->personArray[ret].m_Age = age;

		// ��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		ab->personArray[ret].m_Phone = phone;

		// ��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		ab->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

// 6�����������ϵ��
void cleanPerson(AddressBook * ab)
{
	ab->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

// �˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

int main() {

	// ����ͨѶ¼
	AddressBook ab;
	// ��ʼ��ͨѶ¼������
	ab.m_Size = 0;

	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:  // �����ϵ��
			addPerson(&ab);
			break;
		case 2:  // ��ʾ��ϵ��
			showPerson(&ab);
			break;
		case 3:  // ɾ����ϵ��
			deletePerson(&ab);
			break;
		case 4:  // ������ϵ��
			findPerson(&ab);
			break;
		case 5:  // �޸���ϵ��
			modifyPerson(&ab);
			break;
		case 6:  // �����ϵ��
			cleanPerson(&ab);
			break;
		case 0:  // �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}
