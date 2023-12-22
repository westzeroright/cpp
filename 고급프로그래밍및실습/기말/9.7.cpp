#include <iostream>
#include <string>
using namespace std;

class Product {
	string name;
	int price;
public:
	Product(string n, int p) : name(n), price(p) { }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void setPrice(int price) { this->price = price; }
	virtual int getPrice() { return price; }
	
	void print() { cout << name << price; }
};

class DiscountProduct : public Product {
	double discount;
public:
	DiscountProduct(string n, int p, double d) : Product(n, p) {
		discount = d;
	}
	void setDiscount(double discount) { this->discount = discount; }
	double getDiscount() { return discount; }
	int getPrice()
	{
		double discountedPrice = getPrice() * (1 - discount);
		return discountedPrice;
	}
	void print() { cout << getName() << getPrice() << discount; }
};

int main()
{
	Product* p1 = new Product("toothbrush", 3000);
	Product* p2 = new DiscountProduct("toothbrush", 3000, 0.15);
	cout << p1->getPrice() << endl;
	cout << p2->getPrice() << endl;
}