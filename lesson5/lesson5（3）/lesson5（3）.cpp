#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

enum HeroType {    //����ö������
	Warrior,
	Mage,
	Archer,
	Assassin,
	Priest,
	ADC
};

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

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';

	//ͬ����Ҳ����ʹ��ö������
	HeroType hero = Mage;
	switch (hero) {
	case HeroType::Warrior:
		cout << "����һ��սʿ" << endl;
		break;
	case HeroType::Mage:
		cout << "����һ����ʦ" << endl;
		break;
	case HeroType::Archer:
		cout << "����һ��������" << endl;
		break;
	case HeroType::Assassin:
		cout << "����һ���̿�" << endl;
		break;
	case HeroType::Priest:
		cout << "����һ����ʦ" << endl;
		break;
	case HeroType::ADC:
		cout << "����һ������" << endl;
		break;
	default:
		cout << "����һ������Ӣ��" << endl;
		break;
	}
	//������������һ����ʦ

	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';
	
	int vip;  //����һ����Ա�ȼ�
	cout << "���������Ļ�Ա�ȼ���";
	cin >> vip;
	switch (vip) {
	case 0:
		cout << "û�е�¼����" << endl;
		break;
	case 1:
		cout << "��¼������10�����" << endl;
		break;
	case 2:
		cout << "��¼������20�����" << endl;
		break;
	case 3:
		cout << "��¼������5����ʯ" << endl;
		break;
	case 4:
		cout << "��¼������10����ʯ" << endl;
		break;
	default:
		cout << "��¼������һ��Ӣ�����þ�" << endl;
		break;
	}
	//����Ҳ����ת����if���
	
	cout << '\n';
	cout << "--------------------------------------------" << endl;
	cout << '\n';
	
	cout << "�л�Ϊif�ж�" << endl << endl;
	vip = 0;
	cout << "���������Ļ�Ա�ȼ���";
	cin >> vip;
	if (vip == 0) {
		cout << "û�е�¼����" << endl;
	}
	else if (vip == 1) {
		cout << "��¼������10�����" << endl;
	}
	else if (vip == 2) {
		cout << "��¼������20�����" << endl;
	}
	else if (vip == 3) {
		cout << "��¼������5����ʯ" << endl;
	}
	else if (vip == 4) {
		cout << "��¼������10����ʯ" << endl;
	}
	else {
		cout << "��¼������һ��Ӣ�����þ�" << endl;
	}
	//��switch�Ľ��һ��
	//ע�⣡���е�switch��䶼����ת��Ϊif��䣬������ʱif���ȴ����ת��Ϊswitch���

	
	return 0;
}