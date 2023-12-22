#include <iostream>
using namespace std;

double getAverage(int x, int y)
{
	return (x + y) * 0.5;
}

double getAverage(int x, int y, int z)
{
	return (x + y + z) / 3;
	// 소수점 문제
}

int main()
{
	int a, b, c;
	cout << "두 개의 정수를 입력하시오; ";
	cin >> a >> b;
	cout << getAverage(a, b);

	cout << "세 개의 정수를 입력하시오: ";
	cin >> a >> b >> c;
	cout << getAverage(a, b, c);
}