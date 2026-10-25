#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;

    public:
    Complex(double r=0.0, double i=0.0): real(r), imag(i) {}
    void print() {cout << real << "+" << imag << "i" << endl;}
    friend Complex add(Complex &, Complex &);
};
// It takes two Complex objects as reference parameters and returns a new Complex object that represents the sum of the two input objects.
Complex add(Complex &one, Complex &two) {
    Complex temp;
    temp.real = one.real + two.real;
    temp.imag = one.imag + two.imag;
    return temp;
}

int main() {
    Complex obj1(3.0, 5.0);
    Complex obj2(8.0, 4.0);
    Complex obj3 = add(obj1, obj2);
    obj3.print();

    return 0;
}