#include <iostream>
#include <string>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//��ϸ�ֵ������͹�ϵ�����

	//��ϸ�ֵ�����
	
	//ʲô����ϸ�ֵ�������
	//��ϸ�ֵ�������һ������ĸ�ֵ����������������ǽ����ı�����ֵ���Ҳ�ı�����
	//���� + - * / % �������������ϣ��ø�ֵ���Ӽ��
	//��ϸ�ֵ���������Щ��
	//+=�ӵ� -=���� *=�˵� /=���� %=�����
	//���ʹ�ã�
	int plus1 = 614;
	int plus2 = 798;
	plus1 += plus2;   //�˴��൱�� plus1 = plus1 + plus2;
	cout << "plus1 + plus2 = " << plus1 << endl;   //��������plus1 + plus2 = 1412
	

	int minus1 = 897;
	int minus2 = 161;
	minus1 -= minus2;   //�˴��൱�� minus1 = minus1 - minus2;
	cout << "minus1  - minus2 = " << minus1 << endl;   //��������minus1  - minus2 = 736


	int multiply1 = 12;
	int multiply2 = 13;
	multiply1 *= multiply2;   //�˴��൱�� multiply1 = multiply1 * multiply2;
	cout << "multiply1 * multiply2 = " << multiply1 << endl;
	//��������multiply1 * multiply2 = 156


	float divide1 = 61445;
	int divide2 = 4978;
	divide1 /= divide2;   //�˴��൱�� divide1 = divide1 / divide2;
	cout << "divide1 / divide2 = " << divide1 << endl;
	//��������divide1 / divide2 = 12.3433


	int modulus1 = 61541;
	int modulus2 = 1684;
	modulus1 %= modulus2;   //�˴��൱�� modulus1 = modulus1 % modulus2;
	cout << "modulus1 % modulus2 = " << modulus1 << endl;
	//��������modulus1 % modulus2 = 917
	
	
	cout << '\n';
	cout << "-------------------------------------------" << endl;
	cout << '\n';

	//��ϵ�����
	//ʲô�ǹ�ϵ�������
	//��ϵ�������һ�����������������������ǱȽ��������ֵĴ�С��
	//���� ! > < =  �����������ϣ��ñȽϸ��Ӽ��
	//��ϵ���������Щ��
	//�磺<��С�ڣ� >�����ڣ� <=��С�ڵ��ڣ� >=�����ڵ��ڣ� !=�������ڣ� ==�����ڣ�
	//���ǵ�д��Ϊ (< =) (> =) (! =) (= =)��ʵ�������ǲ���Ҫ���ź��м�Ŀո�
	//���ʹ�ã�
	bool res1 = 1015 > 798;   //1015 > 798Ϊ�棬����res1��ֵ��true��1��
	cout << "1015 > 798����ģ�����res1��ֵ��" << res1 << endl << endl;

	bool res2 = 482 < 159;   //482 < 159Ϊ�٣�����res2��ֵ��false��0��
	cout << "482 < 159 �Ǽٵģ�����res2��ֵ��" << res2 << endl << endl;

	bool res3 = 614 != 798;   //614 != 798Ϊ�棬����res3��ֵ��true��1��
	cout << "614 != 798����ģ�����res3��ֵ��" << res3 << endl << endl;

	bool res4 = 167 == 456;   //167 == 456Ϊ�٣�����res4��ֵ��false��0��
	cout << "167 == 456 �Ǽٵģ�����res4��ֵ��" << res4 << endl << endl;

	bool res5 = 614 >= 798;   //614 >= 798Ϊ�٣�����res5��ֵ��false��0��
	cout << "614 >= 798 �Ǽٵģ�����res5��ֵ��" << res5 << endl << endl;
	
	bool res6 = 614 <= 798;   //614 <= 798Ϊ�棬����res6��ֵ��true��1��
	cout << "614 <= 798 ����ģ�����res6��ֵ��" << res6 << endl << endl;

	cout << '\n' << '\n';

	//��ϵ�����Ҳ��������ʹ�ã�
	int a = 614;
	int b = 798;
	cout << "a == b Ϊ" << (a == b) << endl;   //ע�⣬�жϵĵط�(a == b)��Ҫ�������������ģ�����ᱨ��

	int c = 702;
	int d = 641;
	cout << "c != d Ϊ" << (c != d) << endl;
	
	cout << '\n';
	cout << "-------------------------------------------" << endl;
	cout << '\n';

	//ͬ�����ַ���Ҳ�ǿ��Խ��бȽϵ�
	string str1 = "Hello";
	string str2 = "world";
	cout << "str1 == str2 Ϊ" << (str1 == str2) << endl;

	string str3 = "Hello";
	string str4 = "hello";
	cout << "str3 == str4 Ϊ" << (str3 == str4) << endl;

	string str5 = "Hello";
	string str6 = "Hello";
	cout << "str5 == str6 Ϊ" << (str5 == str6) << endl;

	cout << '\n';

	//ͬ�����ַ�����Ҳ����
	char ch1[] = "Hello";
	char ch2[] = "Hello";
	cout << "ch1���ڴ��ַ == ch2���ڴ��ַ Ϊ" << (ch1 == ch2) << endl;
	//ע�⣡�˴�������Ϊ��ch1 == ch2 Ϊ0
	//Ϊʲô����Ϊ0�أ�
	//��Ϊ��������ʵ����һ��ָ�룬���ǵ��ڴ��ַ����ͬ���������ǲ����
	//�������������أ�
	int judge = strcmp(ch1, ch2);   //strcmp���������ж������ַ������Ƿ���ȫ���
	//���ǣ�ע�⣡strcmp�ķ���ֵ��bool��ͬ��strcmp����ֵΪ0����ʾ������ȣ�����ȷ�֮
	cout << "ch1 == ch2 Ϊ" << judge << "��0��ʾ��ȣ������ʾ����ȣ�" << endl;
	
	
	return 0;
}