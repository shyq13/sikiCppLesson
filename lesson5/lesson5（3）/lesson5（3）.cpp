#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

enum HeroType {    //创建枚举类型
	Warrior,
	Mage,
	Archer,
	Assassin,
	Priest,
	ADC
};

int main() {
	//switch语句
	//switch语句是一个简单的选择语句，它的作用是根据一个条件来执行不同的语句。
	//switch语句的语法是：
	/*
	switch (整数/字符/枚举类型表达式) {
		case 整数常量1:     //如果switch的()里表达式的值与这个值一致，则执行语句1
			语句1;
			break;        //跳出语句
		case 整数常量2:    //如果switch的()里表达式的值与这个值一致，则执行语句2
			语句2;
			break;
		default:        //如果switch()里的值都不与case语句的常量一致，则执行default
			语句3		
			break;
	*/
	//如：
	switch (1 + 1) {
	case 1:
		cout << "1 + 1 = 1" << endl;
		break;    //跳出语句
	case 2:
		cout << "1 + 1 = 2" << endl;
		break;
	default:
		cout << "1 + 1 = other" << endl;
		break;
	}
	//输出结果：1 + 1 = 2

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';

	//也可以使用字符：
	switch ('a') {
	case 96:
		cout << "字符a对应的ASCII编码是96" << endl;
		break;
	case 97:
		cout << "字符a对应的ASCII编码是97" << endl;
		break;
	default:
		cout << "字符a对应的ASCII编码不是96也不是97" << endl;
		break;
	}
	//输出结果：字符a对应的ASCII编码是97

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';

	//同样，也可以使用枚举类型
	HeroType hero = Mage;
	switch (hero) {
	case HeroType::Warrior:
		cout << "我是一个战士" << endl;
		break;
	case HeroType::Mage:
		cout << "我是一个法师" << endl;
		break;
	case HeroType::Archer:
		cout << "我是一个弓箭手" << endl;
		break;
	case HeroType::Assassin:
		cout << "我是一个刺客" << endl;
		break;
	case HeroType::Priest:
		cout << "我是一个牧师" << endl;
		break;
	case HeroType::ADC:
		cout << "我是一个射手" << endl;
		break;
	default:
		cout << "我是一个其他英雄" << endl;
		break;
	}
	//输出结果：我是一个法师

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';
	
	int vip;  //定义一个会员等级
	cout << "请输入您的会员等级：";
	cin >> vip;
	switch (vip) {
	case 0:
		cout << "没有登录奖励" << endl;
		break;
	case 1:
		cout << "登录奖励：10个金币" << endl;
		break;
	case 2:
		cout << "登录奖励：20个金币" << endl;
		break;
	case 3:
		cout << "登录奖励：5个钻石" << endl;
		break;
	case 4:
		cout << "登录奖励：10个钻石" << endl;
		break;
	default:
		cout << "登录奖励：一天英雄试用卷" << endl;
		break;
	}
	//这里也可以转换成if语句
	
	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';
	
	cout << "切换为if判断" << endl << endl;
	vip = 0;
	cout << "请输入您的会员等级：";
	cin >> vip;
	if (vip == 0) {
		cout << "没有登录奖励" << endl;
	}
	else if (vip == 1) {
		cout << "登录奖励：10个金币" << endl;
	}
	else if (vip == 2) {
		cout << "登录奖励：20个金币" << endl;
	}
	else if (vip == 3) {
		cout << "登录奖励：5个钻石" << endl;
	}
	else if (vip == 4) {
		cout << "登录奖励：10个钻石" << endl;
	}
	else {
		cout << "登录奖励：一天英雄试用卷" << endl;
	}
	//与switch的结果一致
	//注意！所有的switch语句都可以转化为if语句，但是有时if语句却不能转化为switch语句

	
	return 0;
}