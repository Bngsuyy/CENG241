#include <iostream>
using namespace std;

class Rational {
    int numerator;
    int denominator;

    public:
    Rational() {
        numerator = 1;
        denominator = 1;
    }
    Rational(int n, int d): numerator(n), denominator(d) {}
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
    void set(int n, int d) {
        numerator = n;
        denominator = d;
    }
};

int main() {
    Rational *ptr1 = new Rational;
    ptr1->set(1, 2);
    Rational *ptr2 = new Rational(3, 4);
    ptr2->print();
    ptr1->print();
    Rational *ptr3 = new Rational[5];
    ptr3[1].print();
    cout << endl;
    (++ptr3)->print();

    delete ptr1;
    delete ptr2;
    delete[] ptr3;
}