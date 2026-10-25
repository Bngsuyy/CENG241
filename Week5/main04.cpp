/* Every object of a class maintains a hidden pointer to itself, known as the this pointer. */
#include <iostream>
using namespace std;

class Test {
    int x;

    public:
    Test(int n=0): x(n) {}
    int getX();
};
int Test::getX() {
    return this->x;  // this pointer is used to access the member variable x of the current object
}

int main() {
    Test obj1(7), obj2, obj3(5);
    cout << "obj1.x = " << obj1.getX() << endl;
    cout << "obj2.x = " << obj2.getX() << endl;
    cout << "obj3.x = " << obj3.getX() << endl;

    return 0;
}