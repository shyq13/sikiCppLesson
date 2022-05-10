#include <iostream>
#include <array>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	array<float, 3> mark = {};
	cout << "请输入你的第一次50米成绩（秒）：";
	cin >> mark[0];
	cout << "请输入你的第二次50米成绩（秒）：";
	cin >> mark[1];
	cout << "请输入你的第三次50米成绩（秒）：";
	cin >> mark[2];
	float total = mark[0] + mark[1] + mark[2];
	cout << "你的50米跑平均成绩为" << total / 3 << "秒" << endl;

	
	return 0;
}