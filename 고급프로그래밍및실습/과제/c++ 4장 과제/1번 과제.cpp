#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 사용자가 추측해야 할 단어 입력
	string prob;
	cout << "맞춰야 하는 단어를 입력하세요 : ";
	cin >> prob;
	
	// -로 초기화
	int length = prob.length();
	// 최대실패횟수 6번
	int tries = 0;
	string answer(length, '-');

	cout << "현재 상태: " << answer << endl;
	// 실패횟수 6회(0~5)이하이고 answer와 prob가 동일하지 않으면 반복 실행
	while (tries < 6 && answer != prob) {
		char c;
		cout << "글자를 추측하시오: ";
		cin >> c;
		if (answer.find(c) != string::npos) {
			cout << "전과 동일한 글자입니다. ";
			continue;
		}
		// prob에 c가 없어서 탐색이 실패한 경우
		int pos = prob.find(c);
		if (pos == string::npos) {
			cout << "추측한 글자가 없습니다. " << endl;
			tries++; // 1 증가하기 전 tries 값, 후위 연산을 통해 1 증가
			continue;
		}
		else {
			// answer에 pos값 인덱스에 c값 대입
			answer[pos] = c;
			// prob에서 (pos+1)위치부터 c 탐색하여 처음으로 나타나는 인덱스 반환
			pos = prob.find(c, pos + 1);
			// 탐색이 성공한 경우
			while (pos != string::npos) {
				answer[pos] = c;
				pos = prob.find(c, pos + 1);
			}
		}
		cout << "현재 상태: " << answer << endl;
		// answer와 prob이 같으면 정답임을 알려주기
		if (answer == prob) {
			cout << "정답입니다!" << endl;
			break;
		}

	}
}