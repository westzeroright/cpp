#include <iostream>
#include <cstring>
using namespace std;

class CustomString {
private:
    char* pBuf;
    int bufSize;

public:
    CustomString(int size, char ch) {
        bufSize = size;
        pBuf = new char[bufSize + 1];
        memset(pBuf, ch, bufSize);
        pBuf[bufSize] = '\0';
    }

    CustomString(const CustomString& other) {
        bufSize = other.bufSize;
        pBuf = new char[bufSize + 1];
        strcpy(pBuf, other.pBuf);
    }

    ~CustomString() {
        delete[] pBuf;
    }

    void print() {
        cout << pBuf << endl;
    }
};


int main() {
    CustomString s1(8, 'c');
    CustomString s2 = s1;

    s1.print();
    s2.print();

    return 0;
}