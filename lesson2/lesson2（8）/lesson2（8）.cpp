#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//小知识点：auto关键字
	auto a = 'e';   //此处使用了auto关键字，auto意为自动，可以自动选择类型，此处auto关键字匹配了char类型
	cout << "a的值是：" << a << endl;  //此处输出结果为“a的值是：e”

	auto b = 100;   //匹配int类型
	cout << "b的值是：" << b << endl;  //此处输出结果为"b的值是：100“
	
	auto c = "hello";  //匹配str类型
	cout << "c的值是：" << c << endl;  //此处输出结果为“c的值是：hello”
	
	auto d = 3.14;    //匹配double类型
	cout << "d的值是：" << d << endl;  //此处输出结果为“d的值是：3.14”
	
	auto e = true;   //匹配bool类型
	cout << "e的值是：" << e << endl;  //此处输出结果为“e的值是：1”
	
	auto f = '\n';   //匹配char类型
	cout << "f的值是：" << f << endl;  //此处输出结果为“f的值是：（换行符）”
	
	
	int stop;
	cin >> stop;
	return 0;
}