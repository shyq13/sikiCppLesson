#include <iostream>
#include <string>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;
//结构体

//结构体放置的第一个位置，可以再所有函数内部使用
struct Position {      //声明一个结构体Position，用于存储游戏中的位置信息
	float x;
	float y;
	float z;
	//进行玩家位置的定义

};

struct Information {
	string name;
	int level;
	int exp;
	int hp;
	int speed;
	int stayingPower;
	int attack;
	int defense;
	Position position;    //结构体中甚至能使用其他的结构体
};

int main() {
	//结构体放置的第二个位置，仅能在此函数体内使用
	Position playerPosition = { 120,903,93.2 };   //定义玩家的位置信息
	//                       x坐标↑  ↑y坐标 ↑z坐标       根据结构体内的变量定义顺序进行赋值
	
	Position enemyPosition {13,245,198.39};    //定义敌人的位置信息
	//定义函数体的规则与定义数组的规则相似↑，也可以简写为以上写法

	//结构体的访问
	cout << "玩家的x坐标是：" << playerPosition.x << endl;
	cout << "玩家的y坐标是：" << playerPosition.y << endl;
	cout << "玩家的z坐标是：" << playerPosition.z << endl;
	//     此处的.x/y/z指输出结构体中x/y/z变量的值↑
	cout << "敌人的x坐标是：" << enemyPosition.x << endl;
	cout << "敌人的y坐标是：" << enemyPosition.y << endl;
	cout << "敌人的z坐标是：" << enemyPosition.z << endl;
	//                     此处的.x/y/z与上同理↑
	
	//有多个NPC，怎么初始化坐标呢？
	//可以使用数组，数组的长度为NPC的数量，数组的每个元素都是一个结构体，每个结构体都是一个NPC的位置信息
	Position NPCPosition[] {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12},
		{13,14,15},
		{16,17,18},
		{19,20,21},
		{22,23,24},
		{25,26,27},
		{28,29,30}        //定义十个结构体，表示十个NPC的坐标
	};     //大括号中的大括号表示结构体的定义，像这样换行使得代码更加易读
	//数组中结构体的访问
	cout << "第一个NPC的x坐标是：" << NPCPosition[0].x << endl;   //此处输出第一个NPC的x坐标
	cout << "第三个NPC的y坐标是：" << NPCPosition[2].y << endl;   //此处输出第三个NPC的y坐标
	cout << "第十个NPC的z坐标是：" << NPCPosition[9].z << endl;   //此处输出第十个NPC的z坐标
	cout << "第六个NPC的坐标系为：" << '\n'
		<< "x：" << NPCPosition[5].x << '\n'
		<< "y：" << NPCPosition[5].y << '\n'
		<< "z：" << NPCPosition[5].z << endl;
	//输出第六个NPC的x、y、z坐标
	
	//为动物设置信息
	Information AnimalInformation[]{
		"海龟",
		1,
		0,
		100,
		10,
		40,
		10,
		30,
		{1,2,3},
	};
	cout << "第一只动物的名字是：" << AnimalInformation[0].name << endl;
	cout << "第一只动物的等级是：" << AnimalInformation[0].level << endl;
	cout << "第一只动物的经验是：" << AnimalInformation[0].exp << endl;
	cout << "第一只动物的血量是：" << AnimalInformation[0].hp << endl;
	cout << "第一只动物的速度是：" << AnimalInformation[0].speed << endl;
	cout << "第一只动物的耐力是：" << AnimalInformation[0].stayingPower << endl;
	cout << "第一只动物的攻击力是：" << AnimalInformation[0].attack << endl;
	cout << "第一只动物的防御力是：" << AnimalInformation[0].defense << endl;
	cout << "第一只动物的坐标是：" << '\n'
		<< "x坐标：" << AnimalInformation[0].position.x << endl
		<< "y坐标：" << AnimalInformation[0].position.y << endl
		<< "z坐标：" << AnimalInformation[0].position.z << endl;
	//输出第一只动物的各项信息
	
	return 0;
}