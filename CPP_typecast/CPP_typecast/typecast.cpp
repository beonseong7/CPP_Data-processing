#include<iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;//float������ ���������� �������� ���Ƿ� �Ҽ��� ���굵 ���Եȴ� �׷��Ƿ� 31
	bats = (int)19.99 + (int)11.99;//int������ ��ȯ�ؼ� ���Ƿ� 30 -- ���ô�C��Ÿ��
	coots = int(19.99) + int(11.99);//int������ ��ȯ�ؼ� ���Ƿ� 30 -- �Ž� C++��Ÿ��
	cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
	cout << ",�˵տ��� = " << coots << endl;

	char ch = 'Z';
	cout << " �ڵ� " << ch << "�� ����";//char������ ���
	cout << int(ch) << endl;//int������ ����ȯ�Ͽ� ���
	cout << "��, �ڵ� Z�� ���� ";
	cout << static_cast<int>(ch) << endl;//int ������ ���
		return 0;
}