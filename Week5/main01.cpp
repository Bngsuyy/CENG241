/* If you want to use private or protected members of two classes, you can use friend functions or friend classes. 
In some cases, you want to achieve an operation outside the class but still need access to the private or protected members of that class.
Operator overloading is one such operation. */
/* If the task being performed by the fuction involves only the members of a single class, you can use member functions. 
If the task involves members of multiple classes, you may need to use friend functions or friend classes. */
#include <iostream>
using namespace std;

class Integer {
    int number;
    public:
    Integer(int n=0): number(n) {}
    friend void print(Integer &);
};
void print(Integer &in) {
    cout << in.number << endl;
}

int main() {
    Integer obj(5);
    print(obj);

    return 0;
}