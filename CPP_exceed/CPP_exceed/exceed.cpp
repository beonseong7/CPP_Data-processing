#include <iostream>
#define ZERO 0
#include<climits>
int main() {
	using namespace std;
	short Dohee = SHRT_MAX; //  short�� �ִ����� ����
	unsigned short Insuk = Dohee;//  short�� ������� 0~65535�� ����� unsigend short ������ Dohee�� ����

	cout << "������ ���¿��� " << Dohee << "���� ����ְ�,";
	cout << "�μ����� ���¿���" << Insuk << "���� ��� �ִ�." << endl;
	cout << "������ ���¿� 1���� �Ա��Ѵ�." << endl << "����";
	Dohee = Dohee + 1;
	Insuk = Insuk + 1;
	cout << "������ �ܰ��� " << Dohee << "���� �Ǿ���, ";//dohee �������� �̹� �ִ밪�̱⿡ 1�� �����Ǵ¼��� -������ �̵��Ѵ�.
	cout << "�μ����� �ܰ��" << Insuk << "���� �Ǿ���." << endl;//insuk �������� ���� �ִ밪�� �ƴϱ⿡ ���� �۵��Ѵ�.
	cout << "�̷� ����! ���� �� ���� ������ �߳�?" << endl;
	Dohee = ZERO;//0���� ����
	Insuk = ZERO;//0���� ����
	cout << "������ ���¿��� " << Dohee << "���� ��� �ְ�";
	cout << "�μ����� ���¿��� " << Insuk << "���� ��� �ִ�." << endl; // insuk
	cout << "������ ���¿��� 1���� �����Ѵ�." << endl << "���� ";
	Dohee = Dohee - 1;
	Insuk = Insuk - 1;
	cout << "������ �ܰ��" << Dohee << "���� �Ǿ���,";//dohee �������� �ִ밪�� �ƴϱ⿡ 1�� ���������� �����Ѵ�.
	cout << "�μ����� �ܰ��" << Insuk << "���� �Ǿ���." << endl;// insuk���� �ּڰ��̱⿡ 65535�� �̵��Ѵ�.
	cout << "�̷� ���� ! �μ��̰� ���ǿ� ��÷�Ǿ���?" << endl;
	return 0;
}