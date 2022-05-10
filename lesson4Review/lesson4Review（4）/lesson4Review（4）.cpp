#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//任务：编写一个程序，让用户可以持续输入数字，每次输入数字，报告当前所有输入的和
	//当用户输入0的时候，程序结束
	float num, sum;
	sum = 0.0;
	for (num = 1; num != 0;){
		cout << "请输入一个数字（输入0退出程序）：";
		cin >> num;
		sum += num;
		cout << "当前所有输入数字的和为：" << sum << endl;
		cout << '\n';
		cout << "-------------------------------------";
		cout << '\n';
	}
	
	
	cout << '\n' << "你已退出程序" << endl;



	//同样，我们也可以使用以下代码
	cout << '\n';
	cout << "----------------程序的另一种写法-------------------" << endl;
	cout << '\n';
	
	float num2, sum2;
	sum2 = 0.0;
	
	while (true) {      //此处的true表示一直循环
		cout << "请输入一个数（输入0退出程序）：";
		cin >> num2;
		if (num2 == 0) {    //此处为if条件判断语句，与Python类似
			break;     //此处的break意为跳出循环体，与Python类似
		}
		
		sum2 += num2;
		cout << "当前所有输入数字的和为：" << sum2 << endl;

		cout << '\n';
		cout << "-------------------------------------";
		cout << '\n';
	}

	cout << '\n' << "你已退出程序" << endl;

	
	return 0;
}