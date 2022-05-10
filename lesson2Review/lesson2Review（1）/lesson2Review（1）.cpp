#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	cout << "请输入一个四位数：";
	int num;
	cin >> num;
	int num1 = num % 10;
	int num2 = (num % 100) / 10;
	int num3 = (num % 1000) / 100;
	int num4 = num / 1000;
	cout << "这个数的千位是：" << num4 << endl;
	cout << "这个数的百位是：" << num3 << endl;
	cout << "这个数的十位是：" << num2 << endl;
	cout << "这个数的个位是：" << num1 << endl;
	
	
	int stop;
	cin >> stop;
	return 0;
}