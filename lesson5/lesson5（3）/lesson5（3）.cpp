#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//switch���
	//switch�����һ���򵥵�ѡ����䣬���������Ǹ���һ��������ִ�в�ͬ����䡣
	//switch�����﷨�ǣ�
	/*
	switch (����/�ַ�/ö�����ͱ��ʽ) {
		case ��������1:     //���switch��()����ʽ��ֵ�����ֵһ�£���ִ�����1
			���1;
			break;        //�������
		case ��������2:    //���switch��()����ʽ��ֵ�����ֵһ�£���ִ�����2
			���2;
			break;
		default:        //���switch()���ֵ������case���ĳ���һ�£���ִ��default
			���3		
			break;
	*/
	//�磺
	switch (1 + 1) {
	case 1:
		cout << "1 + 1 = 1" << endl;
		break;    //�������
	case 2:
		cout << "1 + 1 = 2" << endl;
		break;
	default:
		cout << "1 + 1 = other" << endl;
		break;
	}
	//��������1 + 1 = 2

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';

	//Ҳ����ʹ���ַ���
	switch ('a') {
	case 96:
		cout << "�ַ�a��Ӧ��ASCII������96" << endl;
		break;
	case 97:
		cout << "�ַ�a��Ӧ��ASCII������97" << endl;
		break;
	default:
		cout << "�ַ�a��Ӧ��ASCII���벻��96Ҳ����97" << endl;
		break;
	}
	//���������ַ�a��Ӧ��ASCII������97

	
	return 0;
}