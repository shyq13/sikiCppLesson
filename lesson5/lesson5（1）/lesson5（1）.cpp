#include <iostream>
#include <string>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//�߼������
	//ʲô���߼��������
	//�߼�����������������߼�����ģ����������¼��֣�
	//1. ||���������
	//2. &&���������
	//3. !���������

	//1. ||���������
	//||��������������л�����ģ�������������ǣ�
	//||���߸���һ�����ʽ��ֻҪ��һ�����ʽΪtrue���򷵻�ֵΪtrue
	//������߶�Ϊfalse���򷵻�ֵΪfalse
	//����Python��or�����һ����
	//����
	int vip = 2;
	int normal = 1;
	cout << "(vip = 1 || normal = 1)  ��ֵ��" <<  (vip == 1 || normal == 1)  
		<< '\n';
	//�����true

	int vvip = 10;
	int huangZuan = 30;
	cout << "(vvip = 10 || huangZuan = 30)  ��ֵ��" <<  (vvip == 10 || huangZuan == 30)
		<< '\n';
	//�����true

	int lanZuan = 20;
	int lvZuan = 25;
	cout << "(lanZuan = 20 || lvZuan = 25)  ��ֵ��" <<  (lanZuan == 30 || lvZuan == 15)
		<< '\n';
	//�����false

	cout << '\n';
	cout << "---------------------------------------------------------------------" << endl;
	cout << '\n';

	//2. &&���������
	//&&���������������������ģ�������������ǣ�
	//&&���߸���һ�����ʽ��ֻҪ��һ�����ʽΪfalse���򷵻�ֵΪfalse
	//ֻ�����߶�Ϊtrue���򷵻�ֵΪtrue
	// ����Python��and�����һ����
	//����
	int player1Age;
	int player2Age;
	cout << "���������1�����䣺";
	cin >> player1Age;
	cout << "���������2�����䣺";
	cin >> player2Age;
	if (player1Age >= 18 && player2Age >= 18) {   //���������ֻ���������䶼����18����ܽ�����Ϸ
		cout << "������Ҷ��ǳ����ˣ����Խ�����Ϸ��" << endl;
	}
	else if(player1Age >= 18 || player2Age >= 18) {
		cout << "��һ����Ҳ��ǳ����ˣ����ܽ�����Ϸ��" << endl;
	}
	else {
		cout << "�����˶���δ���꣬���ܽ�����Ϸ��" << endl;
	}

	cout << '\n';
	cout << "---------------------------------------------------------------------" << endl;
	cout << '\n';
	
	//3. !���������
	//���������Ҳ����ȡ������������������з�����ģ�������������ǣ�
	//!���ʽ������ֵΪ���ʽ��ȡ��ֵ
	//! true = false
	//! false = true
	//����Python��not�����һ����
	//����
	char str1[] = "Hello,world!";
	char str2[] = "Hello,world!";
	bool function1 = strcmp(str1, str2);
	cout << "str1��str2��ȵ�ֵ��" << !function1 << endl;
	//�����true
	//����strcmp�����ж������ַ������Ϊ0�������Ϊ1������ʹ�÷����������ȡ�����õ������ַ������Ϊ1��
	//�����Ϊ0

	char str3[] = "Hello,world!";
	char str4[] = "hello,world!;";
	bool function2 = strcmp(str3, str4);
	cout << "str3��str4��ȵ�ֵ��" << !function2 << endl;
	//�����false
	
	
	return 0;
}