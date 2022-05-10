#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//小知识点：常量

	cout << 100 << "是一个永远不会变的数字" << endl;  //这里的100是一个常量
	/*常量是指永远也不会变动的值，比如：true永远表示true
	false永远表示false，100永远是100，a永远是a，只一种与“变量”相对的量*/
	cout << "字符" << 'a' << "也是一个常量" << endl;

	//如何把变量设为常量呢？
	const int a = 30;   //变量加上const标识后变量就变成了一个常量,不能再次赋值来更改a的值
	cout << "变量a变成了一个常量，它的值是：" << a << endl;


	int stop;
	cin >> stop;
	return 0;
}