#include <iostream>
#include <array>  //引入array类
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//模板类array创建数组
	//array创建数组是针对C++11的语法
	array<int/*数组类型*/, 9/*数组长度*/> a/*数组名*/ = { 1,2,3,4,5,6,7,8,9 };
	//以上为解析版，以下为无注释版
	array<int, 9> a1 = { 1,2,3,4,5,6,7,8,9 };
	//array赋值的好处
	//数组之间可以直接赋值，如a = a1;
	array<int, 9> a2 = a1;   //此处是将a1的值赋值给了a2，所以a2也是{ 1,2,3,4,5,6,7,8,9 }
	cout << "a1的值是{ " << a1[0] << ',' << a1[1] << ',' << a1[2] << ',' << a1[3] << ','
		<< a1[4] << ',' << a1[5] << ',' << a1[6] << ',' << a1[7] << ','  << a1[8] 
		<< " }" << endl;

	cout << "a2的值是{ " << a2[0] << ',' << a2[1] << ',' << a2[2] << ',' << a2[3] << ','
		<< a2[4] << ',' << a2[5] << ',' << a2[6] << ',' << a2[7] << ',' << a2[8]
		<< " }" << endl;
	
	
	return 0;
}