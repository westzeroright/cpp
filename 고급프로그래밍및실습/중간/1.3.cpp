#include <iostream>
using namespace std;

int main()
{
	double height, inch, remain;
	int feet;

	cout << "Ű�� �Է��Ͻÿ�: ";
	cin >> height;

	inch = height / 2.54;
	feet = inch / 12;
	remain = inch - (feet * 12);

	cout << height << "cm�� " << feet << "��Ʈ " << remain << "��ġ�Դϴ�.";
}