#include <iostream>
#include <string>
#include <sstream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：判断一个字符串是否是回文字符串，是的话返回1，不是的话返回0
	string str;
	cout << "请输入一个字符串：";
	getline(cin, str);
	bool juege = true;
	//准备工作完毕，那么如何判断呢？
	//使用for循环
	for (int i = 0; i < str.size()/*获取str的长度*/ / 2; i++) {
		//如何获取与i相对称的索引呢？
		//str.size() - 1 - i
		//逐个判断i和相对的索引是否相等就可以了
		if (str[i] != str[str.size() - 1 - i]) {
			juege = false;
		}
	}

	if (juege) {
		cout << str << "是回文字符" << endl;
	}
	else {
		cout << str << "不是回文字符" << endl;
	}
	
	
	return 0;
}