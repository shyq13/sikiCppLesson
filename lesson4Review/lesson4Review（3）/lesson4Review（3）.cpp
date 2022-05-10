#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：用户输入两个整数，输出这两个整数之间所有整数的和（包括这两个整数）
	int num1, num2;
	cout << "请输入一个整数：";
	cin >> num1;
	cout << "请输入另一个整数：";
	cin >> num2;
	
	int sum = 0;  //存储所有整数的和
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}

	cout << num1 << "到" << num2 << "之间（包括这两个整数）的和是" << sum;

	
	return 0;
}