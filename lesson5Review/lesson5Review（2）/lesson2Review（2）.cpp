#include <iostream>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

int main() {
	//������� 1! + 2! + 3! + ... + 20! �ĺ�
	unsigned long long ans = 0;   //ʹ��unsigned����֤��ÿ��Ի�ȡ��ֵ����
	for (int i = 1; i <= 20; i++) {
		long long ansTemp = 1;   //����һ����ʱ����
		//���1!��20!�ĺͣ��൱�����i!�ĺ�
		for (int j = 1; j <= i; j++) {
			ansTemp *= j;
		}
		ans += ansTemp;
	}
	cout << "1! + 2! + 3! + 4! + ���� + 19! + 20! = " << ans << endl;

	
	return 0;
}