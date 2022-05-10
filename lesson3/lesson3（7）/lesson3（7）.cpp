#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//指针的常用操作
	
	int a = 30;
	char b = 'c';
	bool c = true;

	int* pa = &a;
	char* pb = &b;
	bool* pc = &c;

	int* p;
	p = pa;
	cout << "p存储的值是" << p << endl;
	cout << "pa存储的值是" << pa << endl;
	
	cout << '\n';
	
	//由于p的值等于pa的值，所以这两行代码的输出结果是一样的（除去提示语）
	cout << "*p的值（a的值）是" << *p << endl;
	cout << "*pa的值（a的值）是" << *pa << endl;
	cout << "a的值是" << a << endl;
	
	cout << 'n';
	
	//同理，除提示语外，它们输出的结果也相同
	*pa = 100;   //此处的意思为：将pa对应的值（a的值）修改为100
	cout << "现在*pa的值是" << *pa << endl;
	cout << "现在*p的值是" << *p << endl;
	cout << "现在a的值是" << a << endl;
	//除提示语外，它们的输出结果是相同的，都是100
	
	cout << '\n';
	
	*p = 300;
	cout << "修改*p后，*pa的值是" << *pa << endl;
	cout << "修改*p后，*p的值是" << *p << endl;
	cout << "修改*p后，a的值是" << a << endl;
	//与上同理，输出结果为300

	cout << '\n';

  /*int* p1;
	int* p2;
	cout << "p1的值是" << p1 << endl;
	cout << "p2的值是" << p2 << endl;*/
	//以上的代码不能运行，因为两个指针没有初始化
	
	return 0;
}