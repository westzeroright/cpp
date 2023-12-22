class Rectangle {
private:
	int width, length;
public:
	int getWidth() {
		return width;
	}
	void setWidth(int w) {
		width = w;
	}

	int getLength() {
		return length;
	}
	void setLength(int l) {
		length = l;
	}

	int calcArea() {
		return width * length;
	}
};

