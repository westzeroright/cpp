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
	cout << "������ �����Ͻÿ�: ";
	cin >> cal;
	cout << "�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ";
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