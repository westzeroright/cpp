#include <fstream>
#include <iostream>
using namespace std;
void input()
{
	char ch;
	char filename[100];
	cout << "������ ���� �̸��� �Է��ϼ���\n";
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	cout << "�Է��ϼ���\n";
	while (cin.get(ch))
	{
		if (ch == '0') break;
		fout.put(ch);
	}
	fout.close();
	cout << "������ �������ϴ�\n";
}
void output()
{
	char ch;
	char filename[100];
	cout << "������ ���� �̸��� �Է��ϼ���\n";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	if (fin.fail())
	{
		cout << "����� ������ �����ϴ�\n";
	}
	while (fin.get(ch))
		cout.put(ch);
	fin.close();
	cout << "\n";
}
void main()
{
	char select;
	while (1)
	{
		cout << "1.�Է� 2.��� 3.����\n";
		cin >> select;
		
		switch (select) {
		case '1':
			input();
			break;
		case '2':
			output();
			break;
		}
		if (select == '3') break;
	}
}