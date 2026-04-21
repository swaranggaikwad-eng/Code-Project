#include <iostream>
using namespace std;

class Grandparent {
public:
    void gp() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void p() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void c() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.gp();
    obj.p();
    obj.c();

    return 0;
}
