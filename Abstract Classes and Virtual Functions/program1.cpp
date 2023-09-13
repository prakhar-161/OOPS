#include<bits/stdc++.h>
using namespace std;

// DIFFERENCE BETWEEN NORMAL FUNCTION AND VIRTUAL FUNCTION

class MyBase {
    public:
    void show() {
        cout << "Base class show function called" << endl;
    }
    virtual void print() {
        cout << "Base class print function called" << endl;
    }
};

class MyDerived : public MyBase {
    // overriding of both the above functions in base class
    void show() {
        cout << "Derived class show function called" << endl;
    }
    void print() {
        cout << "Derived class print function called" << endl;
    }
};

int main() {
    MyBase *basePtr;
    MyDerived derivedObj;

    basePtr = &derivedObj;

    // run-time polymorphism
    // this happens dynamically
    basePtr -> print();             // derived class print function was called
    basePtr -> show();              // base class show function was called

    return 0;
}