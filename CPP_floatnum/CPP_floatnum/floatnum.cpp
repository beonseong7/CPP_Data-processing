#include<iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);//c++���� �Ҽ��� �� 000ǥ���� ���������� �ش� ��ɾ ���� ǥ���Ҽ��ִ�.
	float tub = 10.0 / 3.0;//�Ҽ��� ���ڸ� 6�ڸ����� �����Ѵ�.
	double mint = 10.0 / 3.0;//�Ҽ��� ���ڸ� 15�ڸ����� �����Ѵ�.
	const float million = 1.0e6;//1.0�� 1,000,000�� ���Ѵ�.

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nten million tubs = ";
	cout << 10 * million * tub << endl;//�鸸�� �������� float���̱⶧���� ��ȿ���ںκ��� �Ѿ�� ��Ȯ�� ���� ������ �ʴ´�.
	cout << "mint = " << mint << "and a million mints = ";
	cout << million * mint << endl;//�鸸�� ���ص� ��ȿ���� ���̹Ƿ� 333�� ��� ��µȴ�.
	return 0;
}