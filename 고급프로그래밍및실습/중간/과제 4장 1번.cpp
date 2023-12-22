#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "전화번호을 입력하세요 : ";
	string number;
	cin >> number;

	int pos = number.find('-');
	while (pos != string::npos) {
		number.erase(pos, 1);
		pos = number.find('-', pos + 1);
	}

	cout << "-가 제거된 전화번호: " << number;
}