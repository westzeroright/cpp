#include <iostream>
using namespace std;

class GameCharacter {
public:
	virtual void draw() = 0;
};

class Hobit : public GameCharacter {
public:
	void draw() { cout << "Hobit" << endl; }
};
class Titan : public GameCharacter {
public:
	void draw() { cout << "Titan" << endl; }
};

int main()
{
	GameCharacter* arrayOfCharacter[3];
	arrayOfCharacter[0] = new Hobit();
	arrayOfCharacter[1] = new Titan();
	for (int i = 0; i < 3; i++) {
		arrayOfCharacter[i]->draw();
	}
}