#include <iostream>
using namespace std;

int main()
{
	cout << "��ȯ�� ���� �Է��ϼ��� (���� : sec) : ";
	int sec;
	cin >> sec;
	int hour, min;
	hour = sec / 3600;
	min = (sec - (hour * 3600)) / 60;
	sec = sec - (hour * 3600) - (min * 60);
	cout << hour << "�ð�" << min << "��" << sec << "��" << endl;
}