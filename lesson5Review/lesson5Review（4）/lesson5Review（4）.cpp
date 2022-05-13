#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//让用户输入a,b,c三个数，并将a,b,c按照从小到大的顺序重新赋值给a,b,c，最后输出出来
	float a, b, c;
	cout << "请输入第一个数：";
	cin >> a;
	cout << "请输入第二个数：";
	cin >> b;
	cout << "请输入第三个数：";
	cin >> c;
	float temp;   //定义temp临时变量
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << " < " << b << " < " << c << endl;

	
	return 0;
}