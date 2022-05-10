#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	int time;
	cout << "请输入时间（秒）：";
	cin >> time;
	int days = time / (24 * 60 * 60);
	int hours = (time - days * (24 * 60 * 60)) / (60 * 60);
	int minutes = time % (60 * 60) / 60;
	int seconds = time % 60;

	cout << time << "秒相当于"
		<< days << "天"
		<< hours << "小时"
		<< minutes << "分钟"
		<< seconds << "秒"
		<< endl;
	
	int stop;
	cin >> stop;
	return 0;
}