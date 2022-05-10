#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	cout << "请输入你的年龄：";
	int age;   //定义变量
	cin >> age;   //将输入内容存入age变量
	age *= 12;    //将输入的变量乘12
	cout << "你已经在地球上存活了" << age << "个月";   //输出结果
	cin >> age;    //防止控制台闪退
	return 0;
}