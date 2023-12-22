#include <iostream>
using namespace std;

class Box {
private:
	int width, length, height;
public:
	int getWidth() { return width; }
	void setWidth(int w) { width = w; }
	int getLength() { return length; }
	void setLength(int l) { length = l; }
	int getHeight() { return height; }
	void setHeight(int h) { height = h; }

	double getVolume() {
		return width * length * height;
	}

	void Input() {
		int w, l, h;
		cin >> w >> l >> h;
		setWidth(w);
		setLength(l);
		setHeight(h);
	}

	void Print() {
		cout << "width : " << getWidth() << endl;
		cout << "length : " << getLength() << endl;
		cout << "height : " << getHeight() << endl;
	}
};

int main()
{
	Box B1;
	cout << "�Ӽ��� �Է��ϼ���(width, length, height): ";
	B1.Input();

	B1.Print();
	cout << "���Ǵ� " << B1.getVolume() << " �Դϴ�." << endl;
}