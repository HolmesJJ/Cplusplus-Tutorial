#include <iostream>
using namespace std;

// 宏常量
#define DAY 7

int main()
{
	cout << "One week have " << DAY << " days" << endl;
	// DAY = 8; // 报错，宏常量不可以修改

	// const修饰变量
	const int MONTH = 12;
	cout << "One year have " << MONTH << " months" << endl;
	// MONTH = 24; // 报错，常量是不可以修改的

	system("pause");

	return 0;
}
