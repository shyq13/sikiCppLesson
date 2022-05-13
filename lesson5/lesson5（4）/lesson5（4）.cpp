#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//break和continue语句
	//break和continue都是用在循环里的
	//break已经在之前介绍过了，所以接下来着重介绍continue
	for (int i = 0; i <= 100; i++) {    //建立一个for循环
		//目的：当i时3的倍数时，不输出i，其余时候都输出i
		if (i % 3 != 0) {  //判断i是否是3的倍数
			cout << i << "   ";    //如果不是，则输出i
		}
	}
	cout << endl;

	cout << '\n';
	cout << "------------------------------------------------------" << endl;
	cout << '\n';
	
	//以上事例也可以如下解决：
	for (int j = 0; j <= 100; j++) {
		if (j % 3 == 0) {
			continue;   //continue表示跳过当前的语句
		}
		cout << j << "   ";
	}


	return 0;
}