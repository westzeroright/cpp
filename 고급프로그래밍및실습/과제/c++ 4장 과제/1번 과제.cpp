#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ����ڰ� �����ؾ� �� �ܾ� �Է�
	string prob;
	cout << "����� �ϴ� �ܾ �Է��ϼ��� : ";
	cin >> prob;
	
	// -�� �ʱ�ȭ
	int length = prob.length();
	// �ִ����Ƚ�� 6��
	int tries = 0;
	string answer(length, '-');

	cout << "���� ����: " << answer << endl;
	// ����Ƚ�� 6ȸ(0~5)�����̰� answer�� prob�� �������� ������ �ݺ� ����
	while (tries < 6 && answer != prob) {
		char c;
		cout << "���ڸ� �����Ͻÿ�: ";
		cin >> c;
		if (answer.find(c) != string::npos) {
			cout << "���� ������ �����Դϴ�. ";
			continue;
		}
		// prob�� c�� ��� Ž���� ������ ���
		int pos = prob.find(c);
		if (pos == string::npos) {
			cout << "������ ���ڰ� �����ϴ�. " << endl;
			tries++; // 1 �����ϱ� �� tries ��, ���� ������ ���� 1 ����
			continue;
		}
		else {
			// answer�� pos�� �ε����� c�� ����
			answer[pos] = c;
			// prob���� (pos+1)��ġ���� c Ž���Ͽ� ó������ ��Ÿ���� �ε��� ��ȯ
			pos = prob.find(c, pos + 1);
			// Ž���� ������ ���
			while (pos != string::npos) {
				answer[pos] = c;
				pos = prob.find(c, pos + 1);
			}
		}
		cout << "���� ����: " << answer << endl;
		// answer�� prob�� ������ �������� �˷��ֱ�
		if (answer == prob) {
			cout << "�����Դϴ�!" << endl;
			break;
		}

	}
}