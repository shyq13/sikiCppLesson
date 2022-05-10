#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	int girl;
	int boy;
	cout << "请输入男生的人数：";
	cin >> boy;
	cout << "请输入女生的人数：";
	cin >> girl;
	float people = girl + boy;
	float num = girl / people;
	float ans = num * 100;
	cout << "女生占全班人数的" << ans << "%" << endl;


	int stop;
	cin >> stop;
	return 0;
}