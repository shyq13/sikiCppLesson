#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//С֪ʶ�㣺auto�ؼ���
	auto a = 'e';   //�˴�ʹ����auto�ؼ��֣�auto��Ϊ�Զ��������Զ�ѡ�����ͣ��˴�auto�ؼ���ƥ����char����
	cout << "a��ֵ�ǣ�" << a << endl;  //�˴�������Ϊ��a��ֵ�ǣ�e��

	auto b = 100;   //ƥ��int����
	cout << "b��ֵ�ǣ�" << b << endl;  //�˴�������Ϊ"b��ֵ�ǣ�100��
	
	auto c = "hello";  //ƥ��str����
	cout << "c��ֵ�ǣ�" << c << endl;  //�˴�������Ϊ��c��ֵ�ǣ�hello��
	
	auto d = 3.14;    //ƥ��double����
	cout << "d��ֵ�ǣ�" << d << endl;  //�˴�������Ϊ��d��ֵ�ǣ�3.14��
	
	auto e = true;   //ƥ��bool����
	cout << "e��ֵ�ǣ�" << e << endl;  //�˴�������Ϊ��e��ֵ�ǣ�1��
	
	auto f = '\n';   //ƥ��char����
	cout << "f��ֵ�ǣ�" << f << endl;  //�˴�������Ϊ��f��ֵ�ǣ������з�����
	
	
	int stop;
	cin >> stop;
	return 0;
}