#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	string number;
	cin >> number;

	int pos = number.find('-');
	while (pos != string::npos) {
		number.erase(pos, 1);
		pos = number.find('-', pos + 1);
	}

	cout << "-�� ���ŵ� ��ȭ��ȣ: " << number;
}