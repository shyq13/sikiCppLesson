#include <iostream>
#include <string>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;

struct CandyBar {
	string brand;
	float weight;
	int calories;
};

int main() {
	CandyBar snack = {
		"Mocha Munch", 
		2.3, 
		500
	};
	
	cout << "ʳ���Ʒ����" << snack.brand << endl;
	cout << "ʳ���������" << snack.weight << endl;
	cout << "ʳ��Ŀ�·����" << snack.calories << endl;
	
	
	return 0;
}