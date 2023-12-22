#include <iostream>
using namespace std;

int main()
{
	double radius, area, volumn;
	cout << "반지름: ";
	cin  >> radius;
	area = 4 * radius * radius;
	const double num = 4.0 / 3.0;
	volumn = num * radius * radius * radius;
	cout << "구의 표면적: " << area << "π" << endl;
	cout << "구의 체적: " << volumn << "π" << endl;
	return 0;
}