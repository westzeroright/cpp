#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
	cin >> s;
	

	const char h = '-';
	
	int pos = s.find(h);
	s.erase(pos, 1);

	int k = s.find(h, pos + 1);
	while (k != string::npos) {
		s.erase(k, 1);
		k = s.find(h);
	}
	
	cout << "-�� ���ŵ� ��ȭ��ȣ: " << s;
}

