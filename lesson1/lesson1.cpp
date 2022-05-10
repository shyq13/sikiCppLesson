#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;     //这里是写命名空间的第一个位置，对所有函数有效

int main() {
	//C++程序基础
	
  //using namespace std;    这是写命名空间的第二个位置，只对该函数有效
	cout << "Hello world!";
	cout << endl;
	/*上两行可以缩写为：
	cout << "Hello world!" << endl;
	或者：
	cout << "Hello world!\n";  */ 
	cout << "Hello C++!";
	cout << endl;    //同上面的注释
	cin.get();   //防止窗口关闭
	return 0;
}