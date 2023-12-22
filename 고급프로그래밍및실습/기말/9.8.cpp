#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Book {
	int number;
	string title, author;
public:
	Book(int n, string t, string a) : number(n), title(t), author(a) { }
	void setNumber(int number) { this->number = number; }
	void setTitle(int title) { this->title = title; }
	void setAuthor(int author) { this->author = author; }
	int getNumber() { return number; }
	string getTitle() { return title; }
	string getAuthor() { return author; }

	virtual void getLateFees(int late) = 0;
	
	~Book() { }
};

class Novel : public Book {
	int fees;
public:
	Novel(int novel, string title, string author) : Book(number, title, author) { }
	void getLateFees(int late) {
		fees = late * 300;
		cout << fees;
	}
};
class Poet : public Book {
	int fees;
public:
	void getLateFees(int late) {
		fees = late * 200;
		cout << fees;
	}
};
class ScienceFiction : public Book {
	int fees;
public:
	void getLateFees(int late) {
		fees = late * 600;
		cout << fees;
	}
};

int main()
{
	
}