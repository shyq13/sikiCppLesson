#include <iostream>
#include <string>
#include <sstream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//�����ж�һ���ַ����Ƿ��ǻ����ַ������ǵĻ�����1�����ǵĻ�����0
	string str;
	cout << "������һ���ַ�����";
	getline(cin, str);
	bool juege = true;
	//׼��������ϣ���ô����ж��أ�
	//ʹ��forѭ��
	for (int i = 0; i < str.size()/*��ȡstr�ĳ���*/ / 2; i++) {
		//��λ�ȡ��i��ԳƵ������أ�
		//str.size() - 1 - i
		//����ж�i����Ե������Ƿ���ȾͿ�����
		if (str[i] != str[str.size() - 1 - i]) {
			juege = false;
		}
	}

	if (juege) {
		cout << str << "�ǻ����ַ�" << endl;
	}
	else {
		cout << str << "���ǻ����ַ�" << endl;
	}
	
	
	return 0;
}