#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//���û�����a,b,c������������a,b,c���մ�С�����˳�����¸�ֵ��a,b,c������������
	float a, b, c;
	cout << "�������һ������";
	cin >> a;
	cout << "������ڶ�������";
	cin >> b;
	cout << "���������������";
	cin >> c;
	float temp;   //����temp��ʱ����
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << " < " << b << " < " << c << endl;

	
	return 0;
}