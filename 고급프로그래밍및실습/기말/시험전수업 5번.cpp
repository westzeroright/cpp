#include <fstream>
#include <iostream>
using namespace std;
void input()
{
	char ch;
	char filename[100];
	cout << "저장할 파일 이름을 입력하세요\n";
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	cout << "입력하세요\n";
	while (cin.get(ch))
	{
		if (ch == '0') break;
		fout.put(ch);
	}
	fout.close();
	cout << "저장이 끝났습니다\n";
}
void output()
{
	char ch;
	char filename[100];
	cout << "오픈할 파일 이름을 입력하세요\n";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	if (fin.fail())
	{
		cout << "출력할 파일이 없습니다\n";
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
		cout << "1.입력 2.출력 3.종료\n";
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