#include <iostream>
#include <string>  //第一步：先导库（string类库，负责C++的字符串）
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//C++风格的字符串
	string str1;   //第二步(1)：定义一个空的字符串
	string str2 = "hello,world";   //第二步(2)：声明并初始化一个字符串
	cout << "str1的值是：" << str1 << endl;    //第三步(1)：输出空字符串
	cout << "str2的值是：" << str2 << endl;    //第三步(2)：输出初始化的字符串
	//以上两种字符串的输出C++编译器都是允许的（包括空字符串）
	str1 = str2;   //这种赋值C++也是允许的
	cout << "str1赋值后的值是：" << str1 << endl;
	//输出结果为："str1赋值后的值是：hello,world"

	//接收用户输入的字符串
	
	/*string str3;
	cout << "请输入一个字符串：";
	cin >> str3;
	cout << "你输入的字符串是：" << str3 << endl;*/
	
	//输出结果为："你输入的字符串是：（用户输入）"
	//小问题：如果用户输入的字符串中有" "（空格），那么cin方法将只会接受空格前的字符串
	//如何解决？
	//使用getline()方法
	string str4;
	cout << "请输入一个字符串：";
	getline(cin,str4);   //这种方法可以接收用户输入的一行内容
	cout << "你输入的字符串是：" << str4 << endl;

	//字符串的索引
	string str5 = "hello,world";
	cout << "str5的第二个字符是：" << str5[1] << endl;
	//第二个字符是：e，所以输出结果为"str5的第二个字符是：e"

	//字符串的拼接
	string str6 = "C";
	string str7 = "++";   //第一步：定义两个字符串
	string str8 = str6 + str7;   //第二步：拼接两个字符串
	cout << "str6与str7拼接后st8的值是：" << str8 << endl;
	//第三步：输出拼接后的字符串
	//输出结果为："str6与str7拼接后st8的值是：C++"
	//另一种写法
	string str9 = "hello,";
	string str10 = "world";
	str9 += str10;  //此处相当于：str9 = str9 + str10;
	cout << "str9与str10拼接后str9的值是：" << str9 << endl;
	//输出结果为："str9与str10拼接后str9的值是：hello,world"
	
	//获取字符串的长度
	string str11 = "hello,C++";   //第一步：定义一个字符串
	int len = str11.size();   //第二步：使用size()方法获取字符串的长度
	cout << "str11的长度是：" << len << endl;
	//第三步：输出字符串的长度
	//输出结果为："str11的长度是：9"
	
	return 0;
}