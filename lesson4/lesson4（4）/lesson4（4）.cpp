#include <iostream>
#include <string>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

//类型别名

//方法一：通过定义宏来起类型别名
#define END/*宏名*/ return 0;/*需要替换的代码*/
//然后宏END就代表return 0;了
//具体看向main函数末尾

//同样，函数名也可以使用宏来起别名
#define START int main()

#define PRINT cout << "Hello World!" << endl;

//类型名也可以
#define TYPE int


//使用typedef（只能给类型定义别名）
typedef string str;
//以后我们定义字符串时就只用使用str了，例：str s = "Hello World!";

START {        //由于之前定义了宏START为int main()，所以这里的START就表示int main()

	TYPE a = 1;   //定义一个变量a，类型为int（宏）
	cout << "用宏定义的变量a的值是" << a << endl;  //输出：用宏定义的变量a的值是1

	str s = "Hello C++!";      //定义一个变量s，类型为string（typedef）
	cout << "用typedef定义的变量s的值是" << s << endl; 
	//输出：用typedef定义的变量s的值是Hello World!
	
	
	PRINT   //打印Hello World!（使用宏来定义类型别名）【宏不需要加分号】
	
	
	END   //由于之前已经定义过return 0;就是宏END了，所以此处可以使用宏END来代替return 0;
}