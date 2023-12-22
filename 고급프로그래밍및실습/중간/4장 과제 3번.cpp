#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	cout << "문자열을 입력하세요 : ";
	string line;
	getline(cin, line);
	int length = line.length();

	char blank = ' ';
	for (int i = 0; i < length; i++) {
		int pos = line.find(blank);
		while (pos != string::npos) {
			line.erase(pos, 1);
			pos = line.find(blank, pos + 1);
		}
	}

	for (int i = 0; i < length; i++) {
		char w = line[i];
		int pos = line.find(w);
		int next = line.find(w, pos + 1);
		while (next != string::npos) {
			line.erase(next, 1);
			next = line.find(w, next + 1);
		}
	}

	cout << line.length();

}