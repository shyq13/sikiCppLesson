#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	cout << "������һ����λ����";
	int num;
	cin >> num;
	int num1 = num % 10;
	int num2 = (num % 100) / 10;
	int num3 = (num % 1000) / 100;
	int num4 = num / 1000;
	cout << "�������ǧλ�ǣ�" << num4 << endl;
	cout << "������İ�λ�ǣ�" << num3 << endl;
	cout << "�������ʮλ�ǣ�" << num2 << endl;
	cout << "������ĸ�λ�ǣ�" << num1 << endl;
	
	
	int stop;
	cin >> stop;
	return 0;
}