#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//switch语句
	//switch语句是一个简单的选择语句，它的作用是根据一个条件来执行不同的语句。
	//switch语句的语法是：
	/*
	switch (整数/字符/枚举类型表达式) {
		case 整数常量1:     //如果switch的()里表达式的值与这个值一致，则执行语句1
			语句1;
			break;        //跳出语句
		case 整数常量2:    //如果switch的()里表达式的值与这个值一致，则执行语句2
			语句2;
			break;
		default:        //如果switch()里的值都不与case语句的常量一致，则执行default
			语句3		
			break;
	*/
	//如：
	switch (1 + 1) {
	case 1:
		cout << "1 + 1 = 1" << endl;
		break;    //跳出语句
	case 2:
		cout << "1 + 1 = 2" << endl;
		break;
	default:
		cout << "1 + 1 = other" << endl;
		break;
	}
	//输出结果：1 + 1 = 2

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';

	//也可以使用字符：
	switch ('a') {
	case 96:
		cout << "字符a对应的ASCII编码是96" << endl;
		break;
	case 97:
		cout << "字符a对应的ASCII编码是97" << endl;
		break;
	default:
		cout << "字符a对应的ASCII编码不是96也不是97" << endl;
		break;
	}
	//输出结果：字符a对应的ASCII编码是97

	
	return 0;
}