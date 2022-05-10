#include <iostream>
#include <string>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

struct CandyBar {
	string brand;
	float weight;
	int calories;
};

int main() {
	CandyBar snack = {
		"Mocha Munch", 
		2.3, 
		500
	};
	
	cout << "食物的品牌是" << snack.brand << endl;
	cout << "食物的重量是" << snack.weight << endl;
	cout << "食物的卡路里是" << snack.calories << endl;
	
	
	return 0;
}