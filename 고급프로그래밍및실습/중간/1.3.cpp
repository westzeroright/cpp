#include <iostream>
using namespace std;

int main()
{
	double height, inch, remain;
	int feet;

	cout << "키를 입력하시오: ";
	cin >> height;

	inch = height / 2.54;
	feet = inch / 12;
	remain = inch - (feet * 12);

	cout << height << "cm는 " << feet << "피트 " << remain << "인치입니다.";
}