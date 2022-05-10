#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//小知识点：布尔值

	bool a = true;    //定义一个布尔类型变量a
	bool b = false;   //定义一个布尔类型变量b
	//布尔类型只有true和false两种值
	//true对应的值是1，false对应的值是0
	//所以输出a后，终端显示1；输出b后，终端显示0
	cout << "true对应的值是：" << a << endl;
	cout << "flase对应的值是：" << b << endl;

	bool c = 1000;
	cout << "1000对应的布尔值是：" << c << endl;  //将要输出“1000对应的布尔值是1”
	//我们也可以把一个数字赋值给布尔类型变量，非零表示true，零表示false


	int stop;
	cin >> stop;
	return 0;
}