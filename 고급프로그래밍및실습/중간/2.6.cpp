#include <iostream>
using namespace std;

// �ҵ��� ������ ���� ������ ���
double get_tax(int x)
{
	int in = x / 10000000;
	if (in > 8)
		return x * 0.35;
	else if (in > 4)
		return x * 0.26;
	else if (in > 1)
		return x * 0.17;
	else
		return x * 0.08;
}

int main()
{
	int income;
	cout << "�ҵ��� �Է��Ͻÿ�: ";
	cin >> income;
	double tax;
	tax = get_tax(income);
	cout << tax << endl;

	return 0;


}