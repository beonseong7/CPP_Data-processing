#include<iostream>
int main() {
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch = ch + 1;//�ƽ�Ű�ڵ�ǥ �������� ���� �ڵ�� ���Ѵ�.
	i = ch;//�ش� ������ �ƽ�Ű�ڵ带 ������ ������ �����Ѵ�.
	cout << ch << "�� ASCII �ڵ��" << i << "�Դϴ�." << endl; //
	cout << "cout.put (ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���:";
	cout.put(ch);// cout.put()�Լ��� ���ڸ� ����Ҷ� ���ȴ�
	cout.put('2');//���� '2'�� ����Ѵ�.
	cout << endl << "����" << endl;
	return 0;
}