#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Display from Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() { // Function overriding
        cout << "Display from Derived class" << endl;
    }
};

// Function overloading
void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(double b) {
    cout << "Double: " << b << endl;
}

int main() {
    Base* b;           // Base class pointer
    Derived d;        // Derived class object
    b = &d;           // Pointing to Derived class object

    b->display();     // Calls Derived class display

    show(5);          // Calls show(int)
    show(5.5);        // Calls show(double)

    return 0;
}
