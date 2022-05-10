#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：编写一个打印1 2 4 8 16 32 64的程序
	for (int i = 1; i <= 64; i *= 2) {
		cout << i << "  ";
	}
	cout << endl;

	
	return 0;
}