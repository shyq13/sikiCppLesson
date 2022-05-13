#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：求得 1! + 2! + 3! + ... + 20! 的和
	unsigned long long ans = 0;   //使用unsigned，保证获得可以获取的值更大
	for (int i = 1; i <= 20; i++) {
		long long ansTemp = 1;   //定义一个临时变量
		//求得1!到20!的和，相当于求得i!的和
		for (int j = 1; j <= i; j++) {
			ansTemp *= j;
		}
		ans += ansTemp;
	}
	cout << "1! + 2! + 3! + 4! + …… + 19! + 20! = " << ans << endl;

	
	return 0;
}