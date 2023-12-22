#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() { }
	Point(int a, int b) : x(a), y(b) { }
	void print()
	{
		cout << "(" << x << "," << y << ")";
	}
	int getX() { return x; }
	int getY() { return y; }
};

class Triangle : public Point {
	Point a;
	Point b;
	Point c;
public:
	Triangle(Point f, Point s, Point t) : a(f), b(s), c(t) { }
	double getArea()
	{
		return 0.5 * ((a.getX() - b.getX()) * c.getY() + (b.getX() - c.getX()) * a.getY() + (c.getX() - a.getX()) * b.getY());
	}
	void printPoint()
	{
		a.print();
		b.print();
		c.print();
	}
};

int main(void)
{
	Point a(0, 3), b(2, 4), c(0, -4);
	Triangle myTriangle(a, b, c);
	myTriangle.printPoint();
	cout << "¸éÀû : " << myTriangle.getArea() << endl;

	return 0;
}