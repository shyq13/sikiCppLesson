#include <iostream>
#include <string>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

//���ͱ���

//����һ��ͨ��������������ͱ���
#define END/*����*/ return 0;/*��Ҫ�滻�Ĵ���*/
//Ȼ���END�ʹ���return 0;��
//���忴��main����ĩβ

//ͬ����������Ҳ����ʹ�ú��������
#define START int main()

#define PRINT cout << "Hello World!" << endl;

//������Ҳ����
#define TYPE int


//ʹ��typedef��ֻ�ܸ����Ͷ��������
typedef string str;
//�Ժ����Ƕ����ַ���ʱ��ֻ��ʹ��str�ˣ�����str s = "Hello World!";

START {        //����֮ǰ�����˺�STARTΪint main()�����������START�ͱ�ʾint main()

	TYPE a = 1;   //����һ������a������Ϊint���꣩
	cout << "�ú궨��ı���a��ֵ��" << a << endl;  //������ú궨��ı���a��ֵ��1

	str s = "Hello C++!";      //����һ������s������Ϊstring��typedef��
	cout << "��typedef����ı���s��ֵ��" << s << endl; 
	//�������typedef����ı���s��ֵ��Hello World!
	
	
	PRINT   //��ӡHello World!��ʹ�ú����������ͱ��������겻��Ҫ�ӷֺš�
	
	
	END   //����֮ǰ�Ѿ������return 0;���Ǻ�END�ˣ����Դ˴�����ʹ�ú�END������return 0;
}