#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "맞춰야 하는 단어를 입력하세요 : ";
	string word;
	cin >> word;
	string answer(word.length(), '-');
	cout << "현재 상태: " << answer << endl;

	while (answer != word)
	{
		cout << "글자를 추측하시오: ";
		char c;
		cin >> c;

		int pos = word.find(c);
		if (pos == string::npos) {
			cout << "추측한 글자가 없습니다." << endl;
			continue;
		}
		else {
			answer[pos] = c;
			pos = word.find(c, pos + 1);
			while (pos != string::npos) {
				answer[pos] = c;
				pos = word.find(c, pos + 1);
			}
		}
		cout << "현재 상태: " << answer << endl;
	}

	if (answer == word) {
		cout << "정답입니다" << endl;
	}
}