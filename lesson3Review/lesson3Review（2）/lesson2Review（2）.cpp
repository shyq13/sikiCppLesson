#include <iostream>
#include <array>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	array<float, 3> mark = {};
	cout << "��������ĵ�һ��50�׳ɼ����룩��";
	cin >> mark[0];
	cout << "��������ĵڶ���50�׳ɼ����룩��";
	cin >> mark[1];
	cout << "��������ĵ�����50�׳ɼ����룩��";
	cin >> mark[2];
	float total = mark[0] + mark[1] + mark[2];
	cout << "���50����ƽ���ɼ�Ϊ" << total / 3 << "��" << endl;

	
	return 0;
}