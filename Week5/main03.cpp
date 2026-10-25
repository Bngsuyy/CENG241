/* If classes work together such as A and B, they can be declared as friends. 
Controlled access by comprimising encapsulation 
Performance and data sharing benefits without using ..*/
#include <iostream>
using namespace std;

class B;

class A {
    int x;

    public:
    A(int n=0): x(n) {}
    friend class B;
};
class B {
    int y;

    public:
    int f(A &);
};
int B::f(A &obj) {
    y = obj.x;
    return y;
}

int main() {
    A one(8);
    B two;
    cout << two.f(one) << endl;
    
    return 0;
}