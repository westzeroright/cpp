#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "����� �ϴ� �ܾ �Է��ϼ��� : ";
	string word;
	cin >> word;
	string answer(word.length(), '-');
	cout << "���� ����: " << answer << endl;

	while (answer != word)
	{
		cout << "���ڸ� �����Ͻÿ�: ";
		char c;
		cin >> c;

		int pos = word.find(c);
		if (pos == string::npos) {
			cout << "������ ���ڰ� �����ϴ�." << endl;
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
		cout << "���� ����: " << answer << endl;
	}

	if (answer == word) {
		cout << "�����Դϴ�" << endl;
	}
}