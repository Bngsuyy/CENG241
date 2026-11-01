#include <iostream>
using namespace std;

class Integer {
    int num;
    public:
    Integer(int n): num(n) {}
    Integer& increment(int);
    void print() {cout << num << endl;}
};
Integer& Integer::increment(int n) {  //(Integer& obj)
    num += n;
    return *this;
    //return obj;?
}

int main() {
    Integer obj(1);
    obj.increment(3).increment(5).print();
    //obj.increment(obj);? When parameter and the invoking object are the same.
    /* Integer& alias = obj;
       obj.increment(alias)*/  //When parameter is a reference alias to the invoking object.
}