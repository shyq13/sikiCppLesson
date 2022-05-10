#include <iostream>
#include <string>
#include <sstream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//for循环的一些拓展知识
	
	//当for循环内只有一条语句时，可以省略{}，如:
	for (int i = 0; i < 10; i++)     //此处的i++是变量自增，相当于i += 1 ; i--同理
		cout << "Hello World!" << endl;   //编译器会默认为这条语句是循环体
	cout << "Hello C++" << endl;   //编译器只会将第一条语句当做循环体（没有{}的情况下），所以只会输出一次
	                               //Hello,C++
	
	cout << '\n' << '\n';
	
	//for循环内的循环体可以容纳多条语句
	for (int j = 0; j < 10; j++) {
		cout << "生成敌人" << endl;
		cout << "设置位置" << endl;
	}
	/*将会输出十次：
	生成敌人
	设置位置*/
	
	cout << '\n' << '\n';

	//变量在外面进行初始化也是可以的
	int k = 0;
	for (; k < 5; k++) {
		cout << "敌人生成完毕" << endl;
	}
	
	//将声明写在外面，初始化写在里面也是可以的
	int l;
	for (l = 0; l < 5; l++) {
		cout << "敌人生成完毕" << endl;
	}

	cout << '\n' << '\n';

	//for循环中的变量的值也是可以输出的
	for (int m = 0; m < 10; m++) {
		cout << "现在m的值是" << m << endl;
	}
	
	cout << '\n' << '\n';
	
	//任务：获取用户输入的一段字符串，并将其倒序输出出来
	string str;
	cout << "请输入一段字符串：";
	getline(cin,str);     //防止用户输入的内容中有空格而影响数据获取

	cout << "倒序输出后为";
	
	for (int n = str.size() - 1; n >= 0; n--)  //此处的str.size()方法可以获取字符串的最大长度
		                                       //获得的长度-1就是字符串的最大索引
	{	                                       //通过n自减以每次缩小一个索引 
		cout << str[n];   //此处的str[n]就是索引
	}
	
	
	return 0;
}