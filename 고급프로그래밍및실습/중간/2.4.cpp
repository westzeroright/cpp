#include <iostream>
using namespace std;

// ��÷ ��ȣ�� �����ϴ� �Լ�
int get_number()
{
	// rand() �Լ��� ȣ���Ͽ� 1���� 100������ ��ȣ ����
	// rand() �Լ��� 0�̻� 1�̸��� ���� ����
	int number;
	number = rand() * 100 + 1;
	return number;
}

// ��÷ ���θ� �Ǻ��ϴ� �Լ�
string is_winning_ticket(int x, int y)
{
	if (x == y)
		return "��÷ ����";
	else
		return "���";
	return 0;
}

int main()
{
	int user;
	cout << "������ ��ȣ�� �Է��Ͻÿ�: ";
	cin >> user;
	int ticket;
	ticket = get_number();
	cout << is_winning_ticket(ticket, user) << endl;
	return 0;
}