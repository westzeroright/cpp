#include <iostream>
using namespace std;


int add(int x1, int x2)
{
	return x1 + x2;
}

int sub(int x1, int x2)
{
	return x1 - x2;
}

int mul(int x1, int x2)
{
	return x1 * x2;
}

int division(int x1, int x2)
{
	if (x2 == 0)
		return 0;
	else
		return x1 / x2;
}

int main()
{
	char cal;
	int a, b;
	cout << "연산을 선택하시오: ";
	cin >> cal;
	cout << "두 수를 공백으로 분리하여 입력하시오: ";
	cin >> a;
	cin >> b;

	switch (cal) {
	case '+':
		cout << add(a, b);
		break;
	case '-':
		cout << sub(a, b);
		break;
	case '*':
		cout << mul(a, b);
		break;
	case '/':
		cout << division(a, b);
		break;
	default:
		break;
	}
	return 0;
}