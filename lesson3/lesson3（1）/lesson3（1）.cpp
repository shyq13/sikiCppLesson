#include <iostream>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//知识点：C语言风格的字符串
	/*C语言风格的字符串：字符串是一个字符数组，字符串的长度是字符数组的长度，字符串的第一个字符是
	字符数组的第一个字符，字符串的最后一个字符是字符数组的最后一个字符。字符数组的最后一个字符
	一定要是一个空字符【'\0'】*/
	char str1[] = { 'h','e','l','l','o',',','w','o','r','l','d' };//这是一个普通的字符数组
	char str2[] = { 'h','e','l','l','o',',','w','o','r','l','d','\0' };
	//以上是一个字符数组           此处空字符的写入表明这是一个C语言风格的字符串↑ 
	cout << str1 << endl;    //输出字符数组（输出错误,因为程序识别不出字符数组的结束【'\0'】）
	cout << str2 << endl;    //输出字符串（输出成功，因为程序识别到了字符串的结束【'\0'】）
	//使用C语言风格的字符串时一定要记得空字符【'\0'】，否则会输出错误
	char str3[] = { 'h','e','l','l','o','\0',',','w','o','r','l','d' };
	cout << str3 << endl;   //由于str3的空字符在'h','e','l','l','o'后面，所以程序的输出结果为："hello"
	//以上字符串声明可以简略为下面这行代码
	char str4[] = "hello,world";  //此处声明时，[]内可以写11，因为此时还没有空字符
	cout << str4 << endl;   //输出字符串
	cout << str4[11] << endl;//输出字符串中第12个字符，也就是空字符（声明后编译器加上的）

	cout << "str4字符串的长度为：" << strlen(str4) << endl;  //此处使用strlen函数取得字符串str4的长度
	//输出结果为："str4字符串的长度为：11"（输出结果不包含空字符，因为这是取得字符串长度的方法，并非字符数组）
	
	char str5[100];
	cout << "请输入一个字符串：";
	cin.getline(str5, 100);    //我们可以用这种方法让用户输入一个字符串，保存在字符数组里
	cout << "你输入的字符串为：" << str5 << endl;   //输出字符串

	char str6[] = "hfuiowhfahpfafhnnhfvnqfehfhfrofh"
		"whhfhseu9fhnhiienvornfnerhfhfhhfhrofnfjhvhe"
		"fverhfvhavkhjrefvfhvhhvevbkahnjbhvhnsefhhfsfnfsh";
	//如果一句话特别长，那么可以像上面一样进行分割
	cout << "str6的值为：" << str6 << endl;   //输出str6

	/*char name[100];
	char food[300];
	cout << "请输入你的名字：";
	cin >> name;
	cout << "请输入你的爱吃的食物：";
	cin >> food;
	
	cout << name << "爱吃" << food << endl;*/      //此处的name中如果有空格，name空格后的字符串会被认为是food
	//例如，name处输入了Mr Smith，那么输出"请输入你的爱吃的食物："后不会让用户输入，而是输出"Mr爱吃Smith"

	//如何解决？
	char name1[100];
	char food1[300];
	cout << "请输入你的名字：";
  //cin >> name1;   此处不能直接使用cin，否则空格后的参数将会被认为是food1的参数
	cin.getline(name1, 100);   //此处的cin.getline()函数就可以解决问题
	//name1是数组名 ↑    ↑100是字符数组的长度
	cout << "请输入你的爱吃的食物：";
  //cin >> food;
	cin.getline(food1, 300);   //同理

	cout << name1 << "爱吃" << food1 << endl;
	
	
	//这个项目我取消写入了输入stop变量的步骤，所以需要按下Ctrl + f5运行保证窗口不闪退
	return 0;
}