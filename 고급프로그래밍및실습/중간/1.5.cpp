#include <iostream>
using namespace std;

int main()
{
	double radius, area, volumn;
	cout << "������: ";
	cin  >> radius;
	area = 4 * radius * radius;
	const double num = 4.0 / 3.0;
	volumn = num * radius * radius * radius;
	cout << "���� ǥ����: " << area << "��" << endl;
	cout << "���� ü��: " << volumn << "��" << endl;
	return 0;
}