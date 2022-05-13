#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：将下列语句转化为switch语句
	/*
	if (ch == 'A')
		a_grade++;
	else if (ch == 'B')
		b_grade++;
	else if (ch == 'C')
		c_grade++;
	else if (ch == 'D')
		d_grade++;
	else
		f_grade++;
	*/
	int ch;
	int a_grade = 0;
	int b_grade = 0;
	int c_grade = 0;
	int d_grade = 0;
	int f_grade = 0;
	cout << "请输入一个字符：";
	cin >> ch;
	switch (ch) {
	case 'A':
		a_grade++;
	case 'B':
		b_grade++;
	case 'C':
		c_grade++;
	case 'D':
		d_grade++;
	case 'F':
		f_grade++;
	}
	cout << "a_grade = " << a_grade << endl
		<< "b_grade = " << b_grade << endl
		<< "c_grade = " << c_grade << endl
		<< "d_grade = " << d_grade << endl
		<< "f_grade = " << f_grade << endl;
	

	
	return 0;
}