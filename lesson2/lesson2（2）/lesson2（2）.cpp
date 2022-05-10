#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//知识点：字符类型

	char a = 'a';     //定义一个字符变量a
	char b = ' ';     //空格也算是一个字符
	char c = '1';     //数字也算一个字符
	char d = '\n';    //换行符也算一个字符

	cout << "a的值是：" << a << d
		<< "b的值是：" << b << d
		<< "c的值是：" << c << endl;

	int e = 'a';     //虽然赋值的时候前后类型不一致不能赋值
	                 //但是是可以把一个字符赋值给一个整型变量的
	                 //获得的是字符对应的编号
	cout << "字符'a'对应的编码是：" << e << endl; 
	                 //从这行代码我们可以知道字符'a'对应的编码是97

	char f = 97;     //同理，我们也可以把一个数字赋值给字符
	cout << "f的值是：" << f << endl;  //输出的结果是'a'

	cout << "a的值是：";
	cout.put(a);     //put函数专门负责输出字符或存有字符的变量
	cout << endl;

	cout << "编码100对应的字符是：";
	cout.put(100);     //同理，put方法也可以使用ASCII编码输出字符
	cout << endl;


	//以上内容具体查询ASCII码表


	int stop;
	cin >> stop;
	return 0;
}