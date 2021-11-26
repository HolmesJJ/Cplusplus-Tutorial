#include<iostream>
#include<string>
using namespace std;

#define MAX 1000 // 最大人数

// 联系人结构体
struct Person
{
	string m_Name;  // 姓名
	int m_Sex;      // 性别：1男 2女
	int m_Age;      // 年龄
	string m_Phone; // 电话
	string m_Addr;  // 住址
};

// 通讯录结构体
struct AddressBook
{
	struct Person personArray[MAX]; // 通讯录中保存的联系人数组
	int m_Size; // 通讯录中人员个数
};

// 1、添加联系人信息
void addPerson(AddressBook *ab)
{
	// 判断电话本是否满了
	if (ab->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		// 姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		ab->personArray[ab->m_Size].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		// 性别
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[ab->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		ab->personArray[ab->m_Size].m_Age = age;

		// 联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		ab->personArray[ab->m_Size].m_Phone = phone;

		// 家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		ab->personArray[ab->m_Size].m_Addr = address;

		// 更新通讯录人数
		ab->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

// 2、显示所有联系人信息
void showPerson(AddressBook * ab)
{
	if (ab->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < ab->m_Size; i++)
		{
			cout << "姓名：" << ab->personArray[i].m_Name << "\t";
			cout << "性别：" << (ab->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << ab->personArray[i].m_Age << "\t";
			cout << "电话：" << ab->personArray[i].m_Phone << "\t";
			cout << "住址：" << ab->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

// 判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1
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

// 3、删除指定联系人信息
void deletePerson(AddressBook * ab)
{
	cout << "请输入您要删除的联系人" << endl;
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
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

// 4、查找指定联系人信息
void findPerson(AddressBook * ab)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(ab, name);
	if (ret != -1)
	{
		cout << "姓名：" << ab->personArray[ret].m_Name << "\t";
		cout << "性别：" << ab->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << ab->personArray[ret].m_Age << "\t";
		cout << "电话：" << ab->personArray[ret].m_Phone << "\t";
		cout << "住址：" << ab->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

// 5、修改指定联系人信息
void modifyPerson(AddressBook * ab)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(ab, name);
	if (ret != -1)
	{
		// 姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		ab->personArray[ret].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		// 性别
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		ab->personArray[ret].m_Age = age;

		// 联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		ab->personArray[ret].m_Phone = phone;

		// 家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		ab->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

// 6、清空所有联系人
void cleanPerson(AddressBook * ab)
{
	ab->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

// 菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

int main() {

	// 创建通讯录
	AddressBook ab;
	// 初始化通讯录中人数
	ab.m_Size = 0;

	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:  // 添加联系人
			addPerson(&ab);
			break;
		case 2:  // 显示联系人
			showPerson(&ab);
			break;
		case 3:  // 删除联系人
			deletePerson(&ab);
			break;
		case 4:  // 查找联系人
			findPerson(&ab);
			break;
		case 5:  // 修改联系人
			modifyPerson(&ab);
			break;
		case 6:  // 清空联系人
			cleanPerson(&ab);
			break;
		case 0:  // 退出通讯录
			cout << "欢迎下次使用" << endl;
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
