#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	cout << "请输入你的身高（米）：";
	float height;
	cin >> height;
	height = height * 100;
	cout << "你的身高是：" << height << "cm" << endl;
	
	int stop;
	cin >> stop;
	return 0;
}