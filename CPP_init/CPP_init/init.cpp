#include<iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // ������ �����͸� �Ǽ������� ����
	int guess = 3.9832; // �Ǽ��� �����͸� ���������� ����
	int debt = 7.2E12; // �����Ͱ� �ʹ�Ŀ�� ���� �Ұ�
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt  = " << debt << endl;
	return 0;
}