#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//知识点：运算符

	int a;
	int b;
	cout << "请输入第一个数字（一定要是整数，否则会将小数点后面的数省去）：";
	cin >> a;
	cout << "请输入第二个数字（一定要是整数，否则会将小数点后面的数省去）：";
	cin >> b;

	int ans1 = a + b;
	int ans2 = a - b;
	int ans3 = a * b;
	float ans4 = a / b;
	int ans5 = a % b;

	cout << "a + b = " << ans1 << endl
		<< "a - b = " << ans2 << endl
		<< "a * b = " << ans3 << endl
		<< "a / b = " << ans4 << endl
		<< "a % b = " << ans5 << endl;

	int stop;
	cin >> stop;
	return 0;
}