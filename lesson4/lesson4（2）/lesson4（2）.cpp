#include <iostream>
#include <string>
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
//运行该项目时一定要将它设为启动项！！！
using namespace std;

int main() {
	//组合赋值运算符和关系运算符

	//组合赋值运算符
	
	//什么是组合赋值运算符？
	//组合赋值运算符是一种特殊的赋值运算符，它的作用是将左侧的变量赋值给右侧的变量，
	//它将 + - * / % 等运算符进行组合，让赋值更加简便
	//组合赋值运算符有哪些？
	//+=加等 -=减等 *=乘等 /=除等 %=求余等
	//如何使用？
	int plus1 = 614;
	int plus2 = 798;
	plus1 += plus2;   //此处相当于 plus1 = plus1 + plus2;
	cout << "plus1 + plus2 = " << plus1 << endl;   //输出结果：plus1 + plus2 = 1412
	

	int minus1 = 897;
	int minus2 = 161;
	minus1 -= minus2;   //此处相当于 minus1 = minus1 - minus2;
	cout << "minus1  - minus2 = " << minus1 << endl;   //输出结果：minus1  - minus2 = 736


	int multiply1 = 12;
	int multiply2 = 13;
	multiply1 *= multiply2;   //此处相当于 multiply1 = multiply1 * multiply2;
	cout << "multiply1 * multiply2 = " << multiply1 << endl;
	//输出结果：multiply1 * multiply2 = 156


	float divide1 = 61445;
	int divide2 = 4978;
	divide1 /= divide2;   //此处相当于 divide1 = divide1 / divide2;
	cout << "divide1 / divide2 = " << divide1 << endl;
	//输出结果：divide1 / divide2 = 12.3433


	int modulus1 = 61541;
	int modulus2 = 1684;
	modulus1 %= modulus2;   //此处相当于 modulus1 = modulus1 % modulus2;
	cout << "modulus1 % modulus2 = " << modulus1 << endl;
	//输出结果：modulus1 % modulus2 = 917
	
	
	cout << '\n';
	cout << "-------------------------------------------" << endl;
	cout << '\n';

	//关系运算符
	//什么是关系运算符？
	//关系运算符是一种特殊的运算符，它的作用是比较两个数字的大小，
	//它将 ! > < =  运算符进行组合，让比较更加简便
	//关系运算符有哪些？
	//如：<（小于） >（大于） <=（小于等于） >=（大于等于） !=（不等于） ==（等于）
	//他们的写法为 (< =) (> =) (! =) (= =)，实际输入是不需要括号和中间的空格
	//如何使用？
	bool res1 = 1015 > 798;   //1015 > 798为真，所以res1的值是true（1）
	cout << "1015 > 798是真的，所以res1的值是" << res1 << endl << endl;

	bool res2 = 482 < 159;   //482 < 159为假，所以res2的值是false（0）
	cout << "482 < 159 是假的，所以res2的值是" << res2 << endl << endl;

	bool res3 = 614 != 798;   //614 != 798为真，所以res3的值是true（1）
	cout << "614 != 798是真的，所以res3的值是" << res3 << endl << endl;

	bool res4 = 167 == 456;   //167 == 456为假，所以res4的值是false（0）
	cout << "167 == 456 是假的，所以res4的值是" << res4 << endl << endl;

	bool res5 = 614 >= 798;   //614 >= 798为假，所以res5的值是false（0）
	cout << "614 >= 798 是假的，所以res5的值是" << res5 << endl << endl;
	
	bool res6 = 614 <= 798;   //614 <= 798为真，所以res6的值是true（1）
	cout << "614 <= 798 是真的，所以res6的值是" << res6 << endl << endl;

	cout << '\n' << '\n';

	//关系运算符也可以这样使用：
	int a = 614;
	int b = 798;
	cout << "a == b 为" << (a == b) << endl;   //注意，判断的地方(a == b)是要用括号括起来的，否则会报错

	int c = 702;
	int d = 641;
	cout << "c != d 为" << (c != d) << endl;
	
	cout << '\n';
	cout << "-------------------------------------------" << endl;
	cout << '\n';

	//同样，字符串也是可以进行比较的
	string str1 = "Hello";
	string str2 = "world";
	cout << "str1 == str2 为" << (str1 == str2) << endl;

	string str3 = "Hello";
	string str4 = "hello";
	cout << "str3 == str4 为" << (str3 == str4) << endl;

	string str5 = "Hello";
	string str6 = "Hello";
	cout << "str5 == str6 为" << (str5 == str6) << endl;

	cout << '\n';

	//同样，字符数组也可以
	char ch1[] = "Hello";
	char ch2[] = "Hello";
	cout << "ch1的内存地址 == ch2的内存地址 为" << (ch1 == ch2) << endl;
	//注意！此处输出结果为：ch1 == ch2 为0
	//为什么它们为0呢？
	//因为数组名其实就是一个指针，它们的内存地址不相同，所以它们不相等
	//如何让它们相等呢？
	int judge = strcmp(ch1, ch2);   //strcmp方法可以判断两个字符数组是否完全相等
	//但是，注意！strcmp的返回值与bool不同，strcmp返回值为0，表示它们相等；不相等反之
	cout << "ch1 == ch2 为" << judge << "（0表示相等，非零表示不相等）" << endl;
	
	
	return 0;
}