#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string title, author;
public:
	string getTitle() {
		return title;
	}
	void setTitle(string t) {
		title = t;
	}

	string getAuthor() {
		return author;
	}
	void setAuthor(string a) {
		author = a;
	}
};
int main()
{
	Book myBook;

	myBook.setTitle("Great C++");
	myBook.setAuthor("bob");

	return 0;
}