#include <iostream>
#include <string>
using namespace std;

class Book {
public:
	string title, author;
};

int main()
{
	Book myBook;

	myBook.title = "Great C++";
	myBook.author = "bob";
}