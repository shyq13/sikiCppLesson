#include <iostream>
#include <string>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//逻辑运算符
	//什么是逻辑运算符？
	//逻辑运算符是用来进行逻辑运算的，它们是以下几种：
	//1. ||：或运算符
	//2. &&：与运算符
	//3. !：非运算符

	//1. ||：或运算符
	//||运算符是用来进行或运算的，它的运算规则是：
	//||两边各有一个表达式，只要有一个表达式为true，则返回值为true
	//如果两边都为false，则返回值为false
	//（与Python的or运算符一样）
	//例：
	int vip = 2;
	int normal = 1;
	cout << "(vip = 1 || normal = 1)  的值是" <<  (vip == 1 || normal == 1)  
		<< '\n';
	//结果：true

	int vvip = 10;
	int huangZuan = 30;
	cout << "(vvip = 10 || huangZuan = 30)  的值是" <<  (vvip == 10 || huangZuan == 30)
		<< '\n';
	//结果：true

	int lanZuan = 20;
	int lvZuan = 25;
	cout << "(lanZuan = 20 || lvZuan = 25)  的值是" <<  (lanZuan == 30 || lvZuan == 15)
		<< '\n';
	//结果：false

	cout << '\n';
	cout << "---------------------------------------------------------------------" << endl;
	cout << '\n';

	//2. &&：与运算符
	//&&运算符是用来进行与运算的，它的运算规则是：
	//&&两边各有一个表达式，只要有一个表达式为false，则返回值为false
	//只有两边都为true，则返回值为true
	// （与Python的and运算符一样）
	//例：
	int player1Age;
	int player2Age;
	cout << "请输入玩家1的年龄：";
	cin >> player1Age;
	cout << "请输入玩家2的年龄：";
	cin >> player2Age;
	if (player1Age >= 18 && player2Age >= 18) {   //与运算符，只有两人年龄都大于18岁才能进入游戏
		cout << "两个玩家都是成年人，可以进入游戏！" << endl;
	}
	else if(player1Age >= 18 || player2Age >= 18) {
		cout << "有一个玩家不是成年人，不能进入游戏！" << endl;
	}
	else {
		cout << "两个人都是未成年，不能进入游戏！" << endl;
	}

	cout << '\n';
	cout << "---------------------------------------------------------------------" << endl;
	cout << '\n';
	
	//3. !：非运算符
	//非运算符（也叫作取反运算符）是用来进行非运算的，它的运算规则是：
	//!表达式，返回值为表达式的取反值
	//! true = false
	//! false = true
	//（与Python的not运算符一样）
	//例：
	char str1[] = "Hello,world!";
	char str2[] = "Hello,world!";
	bool function1 = strcmp(str1, str2);
	cout << "str1与str2相等的值是" << !function1 << endl;
	//结果：true
	//由于strcmp函数判断两个字符串相等为0，不相等为1，所以使用非运算符进行取反，得到两个字符串相等为1，
	//不相等为0

	char str3[] = "Hello,world!";
	char str4[] = "hello,world!;";
	bool function2 = strcmp(str3, str4);
	cout << "str3与str4相等的值是" << !function2 << endl;
	//结果：false
	
	
	return 0;
}