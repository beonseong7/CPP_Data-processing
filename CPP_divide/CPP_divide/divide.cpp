#include<iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� ������: 9/5 = " << 9 / 5 << endl;//�Ҽ��δ� ������
	cout << "�ε� �Ҽ����� ������: 9.0/5.0 = ";
	cout << 9.0 / 5.0  << endl;//�⺻������ double��
	cout << "ȥ�� ������: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double�� ���: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl;//fǥ�ð������� double������ �ν���.
	cout << "float�� ���: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << endl;//�ڿ� f���ٿ� float���� ǥ���ϸ� float������ ǥ��
	return 0;
}