#include <iostream>
int main() {
	using namespace std;
	float a = 2.34E+22f; // 2.34���� �Ҽ����� ���������� 22�� �ű��.
	float b = a + 1.0f; // a���ڿ� 1.0�����Ѵ� ������ float�� ������ ������ ����Ƿ� ���� �߻�
	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;//��������� 0�� ��µȴ�.
	return 0;
}