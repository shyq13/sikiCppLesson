#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//for循环
	
	//标准的for循环结构
	
	cout << "创建了一个敌人" << endl << endl << endl;   //代表创建了一个敌人
	//如果有上千个敌人呢？
	//可以使用for循环
	for (int i = 0/*初始化*/; i < 10/*判断是否继续循环*/; i += 1/*每执行一遍后的刷新*/) {
		//循环体
		cout << "创建了一个敌人" << endl;
		//当i = 0 , 1 , 2 , 3, 4 , 5 , 6 , 7 , 8 , 9时，输出"创建一个敌人"
	}

	/*相当于Python的以下代码：
	for i /相当于int i/ in range(10 /相当于i <= 10/ ):
		print("创建了一个敌人")
		//Python每当执行完一次后会自动i += 1，但是C++要在括号里加上i += 1
	*/

	cout << endl << endl;

	//清爽版：
	for (int n = 0; n < 10; n += 1) {
		cout << "创建了一个敌人" << endl;
		//输出10个"创建了一个敌人"
	}

  /*for (int m = 0; n <10;) {
		cout << "创建了一个敌人" << endl;
	}
	此处为死循环（永远不会停止，直到程序崩溃），程序中尽量避免死循环*/

	
	return 0;
}