#include <iostream>
#include <string>
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
//���и���Ŀʱһ��Ҫ������Ϊ���������
using namespace std;
//�ṹ��

//�ṹ����õĵ�һ��λ�ã����������к����ڲ�ʹ��
struct Position {      //����һ���ṹ��Position�����ڴ洢��Ϸ�е�λ����Ϣ
	float x;
	float y;
	float z;
	//�������λ�õĶ���

};

struct Information {
	string name;
	int level;
	int exp;
	int hp;
	int speed;
	int stayingPower;
	int attack;
	int defense;
	Position position;    //�ṹ����������ʹ�������Ľṹ��
};

int main() {
	//�ṹ����õĵڶ���λ�ã������ڴ˺�������ʹ��
	Position playerPosition = { 120,903,93.2 };   //������ҵ�λ����Ϣ
	//                       x�����  ��y���� ��z����       ���ݽṹ���ڵı�������˳����и�ֵ
	
	Position enemyPosition {13,245,198.39};    //������˵�λ����Ϣ
	//���庯����Ĺ����붨������Ĺ������ơ���Ҳ���Լ�дΪ����д��

	//�ṹ��ķ���
	cout << "��ҵ�x�����ǣ�" << playerPosition.x << endl;
	cout << "��ҵ�y�����ǣ�" << playerPosition.y << endl;
	cout << "��ҵ�z�����ǣ�" << playerPosition.z << endl;
	//     �˴���.x/y/zָ����ṹ����x/y/z������ֵ��
	cout << "���˵�x�����ǣ�" << enemyPosition.x << endl;
	cout << "���˵�y�����ǣ�" << enemyPosition.y << endl;
	cout << "���˵�z�����ǣ�" << enemyPosition.z << endl;
	//                     �˴���.x/y/z����ͬ���
	
	//�ж��NPC����ô��ʼ�������أ�
	//����ʹ�����飬����ĳ���ΪNPC�������������ÿ��Ԫ�ض���һ���ṹ�壬ÿ���ṹ�嶼��һ��NPC��λ����Ϣ
	Position NPCPosition[] {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12},
		{13,14,15},
		{16,17,18},
		{19,20,21},
		{22,23,24},
		{25,26,27},
		{28,29,30}        //����ʮ���ṹ�壬��ʾʮ��NPC������
	};     //�������еĴ����ű�ʾ�ṹ��Ķ��壬����������ʹ�ô�������׶�
	//�����нṹ��ķ���
	cout << "��һ��NPC��x�����ǣ�" << NPCPosition[0].x << endl;   //�˴������һ��NPC��x����
	cout << "������NPC��y�����ǣ�" << NPCPosition[2].y << endl;   //�˴����������NPC��y����
	cout << "��ʮ��NPC��z�����ǣ�" << NPCPosition[9].z << endl;   //�˴������ʮ��NPC��z����
	cout << "������NPC������ϵΪ��" << '\n'
		<< "x��" << NPCPosition[5].x << '\n'
		<< "y��" << NPCPosition[5].y << '\n'
		<< "z��" << NPCPosition[5].z << endl;
	//���������NPC��x��y��z����
	
	//Ϊ����������Ϣ
	Information AnimalInformation[]{
		"����",
		1,
		0,
		100,
		10,
		40,
		10,
		30,
		{1,2,3},
	};
	cout << "��һֻ����������ǣ�" << AnimalInformation[0].name << endl;
	cout << "��һֻ����ĵȼ��ǣ�" << AnimalInformation[0].level << endl;
	cout << "��һֻ����ľ����ǣ�" << AnimalInformation[0].exp << endl;
	cout << "��һֻ�����Ѫ���ǣ�" << AnimalInformation[0].hp << endl;
	cout << "��һֻ������ٶ��ǣ�" << AnimalInformation[0].speed << endl;
	cout << "��һֻ����������ǣ�" << AnimalInformation[0].stayingPower << endl;
	cout << "��һֻ����Ĺ������ǣ�" << AnimalInformation[0].attack << endl;
	cout << "��һֻ����ķ������ǣ�" << AnimalInformation[0].defense << endl;
	cout << "��һֻ����������ǣ�" << '\n'
		<< "x���꣺" << AnimalInformation[0].position.x << endl
		<< "y���꣺" << AnimalInformation[0].position.y << endl
		<< "z���꣺" << AnimalInformation[0].position.z << endl;
	//�����һֻ����ĸ�����Ϣ
	
	return 0;
}