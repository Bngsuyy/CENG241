#include <iostream>
using namespace std;

class personType {
    private:
    string firstName;
    string lastName;
    public:
    void print() const;
    void setName(string first, string last);
    personType& setFirstName(string first);
    personType& setLastName(string last);
    string getFirstName() const;
    string getLastName() const;
    personType(string first = "", string last = ""): firstName(first), lastName(last) {}
};
personType& personType::setFirstName(string first) {
    firstName = first;
    return *this;
}
personType& personType::setLastName(string last) {
    lastName = last;
    return *this;
}
void personType::print() const {
    cout << firstName << " " << lastName << endl;
}
void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}
string personType::getFirstName() const {
    return firstName;
}
string personType::getLastName() const {
    return lastName;
}

int main() {
    personType student1("Lisa", "Simpson"), student2, student3, student4("Homer"), student5("Marge", "Simpson");
    cout << "Student 1: ";
    student1.print(); cout << endl;
    cout << "Student 2: ";
    student2.setName("Bart", "Simpson");
    student2.print(); cout << endl;
    cout << "Student 3: ";
    student3.setFirstName("Maggie").setLastName("Simpson");
    student3.print(); cout << endl;
    cout << "Student 4: ";
    cout << student4.getFirstName() << " " << student4.getLastName() << endl;
    cout << "Student 5: ";
    //cout << student5.print();?
    
    return 0;
}