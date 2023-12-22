// 주사위
#include <iostream>
using namespace std;

class Dice {
public:
	int face;
	void roll() {
		face = (int)(rand() % 6 + 1);
	}
	void show() {
		cout << "숫자: " << face << endl;
	}
};

int main()
{
	Dice myDice;

	myDice.roll();
	myDice.show();
	
	return 0;
}