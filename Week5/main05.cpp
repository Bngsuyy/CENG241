#include <iostream>
using namespace std;

class B {
    int prv_member;

    public:
    B& func1();
    void func2(B &);
    int getPrvMember() { return prv_member; }
};
B& B::func1() {
    func2(*this);  // Calls func2 with the current object as an argument
    
    return *this;  // Returns a reference to the current object of type B
}
void B::func2(B &obj) {
    obj.prv_member = 10;  // Accesses the private member of the passed object and modifies it
}

int main() {
    B obj1, obj2;
    obj1.func1();  // Calls func1 on obj1, which in turn calls func2 with obj1 as an argument
    obj2.func2(obj1);  // Calls func2 on obj2, passing obj1 as an argument

    cout << "obj1.prv_member = " << obj1.getPrvMember() << endl;
    cout << "obj2.prv_member = " << obj2.getPrvMember() << endl;  // Why do we get 2 here?

    return 0;
}