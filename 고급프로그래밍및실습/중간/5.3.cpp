// �ֻ���
#include <iostream>
using namespace std;

class Dice {
public:
	int face;
	void roll() {
		face = (int)(rand() % 6 + 1);
	}
	void show() {
		cout << "����: " << face << endl;
	}
};

int main()
{
	Dice myDice;

	myDice.roll();
	myDice.show();
	
	return 0;
}