#include <iostream>
#include <climits>// ������ �ִ밪 ���õ� �Լ��� ���� ���̺귯��
int main() {
	using namespace std;
	int n_int = INT_MAX;//int ���� �ִ밪 ����
	short n_short = SHRT_MAX;//short ���� �ִ밪 ����
	long n_long = LONG_MAX;//long ���� �ִ밪 ����
	long long n_llong = LLONG_MAX;//long long ���� �ִ밪 ����

	cout << "int�� " << sizeof(int) << " ����Ʈ�̴�." << endl;// sizeof ->������ ũ�⸦ �˾Ƴ���.
	cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl;
	cout << "long�� " << sizeof n_long << " ����Ʈ�̴�." << endl;
	cout << "long long�� " << sizeof n_llong << " ����Ʈ�̴�." << endl;
	cout << endl;
	cout << "�ִ�:" << endl;
	cout << "int : " << n_int << endl;
	cout << "short : " << n_short << endl;
	cout << "long : " << n_long << endl;
	cout << "long long : " << n_llong << endl;
	cout << "int�� �ּڰ� = " << INT_MAX << endl;
	cout << "����Ʈ �� ��Ʈ �� =" << CHAR_BIT << endl;
	return 0;
}