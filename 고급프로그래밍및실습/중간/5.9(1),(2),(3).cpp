#include <iostream>
using namespace std;

double getAverage(int x, int y)
{
	return (x + y) * 0.5;
}

double getAverage(int x, int y, int z)
{
	return (x + y + z) / 3;
	// �Ҽ��� ����
}

int main()
{
	int a, b, c;
	cout << "�� ���� ������ �Է��Ͻÿ�; ";
	cin >> a >> b;
	cout << getAverage(a, b);

	cout << "�� ���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	cout << getAverage(a, b, c);
}