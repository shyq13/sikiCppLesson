#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	int time;
	cout << "������ʱ�䣨�룩��";
	cin >> time;
	int days = time / (24 * 60 * 60);
	int hours = (time - days * (24 * 60 * 60)) / (60 * 60);
	int minutes = time % (60 * 60) / 60;
	int seconds = time % 60;

	cout << time << "���൱��"
		<< days << "��"
		<< hours << "Сʱ"
		<< minutes << "����"
		<< seconds << "��"
		<< endl;
	
	int stop;
	cin >> stop;
	return 0;
}