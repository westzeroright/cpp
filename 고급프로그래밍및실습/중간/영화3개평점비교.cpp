#include <iostream>
#include <string>
using namespace std;

class Movie {
	string title;
	double rate;
public:
	static int number;
	Movie(string title, double rate)
	{
		this->title = title;
		this->rate = rate;
	}
	string getTitle() { return title; }
	double getRate() { return rate; }
	int getNumber() { return number; }
};

int Movie::number = 0;

int main()
{
	string t;
	double r;
	int n;

	cout << "영화의 제목, 평점, 참여인원을 입력하여라" << endl;
	cin >> t >> r >> n;
	Movie* m1 = new Movie(t, r);
	m1->number += n;

	cout << "영화의 제목, 평점, 참여인원을 입력하여라" << endl;
	cin >> t >> r >> n;
	Movie* m2 = new Movie(t, r);
	m2->number += n;

	cout << "영화의 제목, 평점, 참여인원을 입력하여라" << endl;
	cin >> t >> r >> n;
	Movie* m3 = new Movie(t, r);
	m3->number += n;

	cout << "평이 좋은 영화는";
	if (m1->getRate() > m2->getRate())
		if (m1->getRate() > m3->getRate())
			cout << "평점 " << m1->getRate() << "으로 " << m1->getTitle() << "이다";
		else
			cout << "평점 " << m3->getRate() << "으로 " << m3->getTitle() << "이다";
	else
		cout << "평점 " << m2->getRate() << "으로 " << m2->getTitle() << "이다";




	cout << "총 참여인원은 " << m3->number << "이다";

	return 0;
}