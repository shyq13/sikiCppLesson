#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//֪ʶ�㣺�����

	int a;
	int b;
	cout << "�������һ�����֣�һ��Ҫ������������ὫС����������ʡȥ����";
	cin >> a;
	cout << "������ڶ������֣�һ��Ҫ������������ὫС����������ʡȥ����";
	cin >> b;

	int ans1 = a + b;
	int ans2 = a - b;
	int ans3 = a * b;
	float ans4 = a / b;
	int ans5 = a % b;

	cout << "a + b = " << ans1 << endl
		<< "a - b = " << ans2 << endl
		<< "a * b = " << ans3 << endl
		<< "a / b = " << ans4 << endl
		<< "a % b = " << ans5 << endl;

	int stop;
	cin >> stop;
	return 0;
}