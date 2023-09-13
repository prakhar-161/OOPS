#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void func() {
        cout << "this is a function from class A" << endl;
    }
};

class B {
    public:
    void func() {
        cout << "this is a function from class B" << endl;
    }
};

class C : public A, public B {};

// so there is inheritance ambiguity here 
// since the name of functions to be inherited in class C from class A and B are same
// so, Scope resolution operator (::) is used

int main() {
    C obj;
    // obj.func();
    obj.A :: func();
    obj.B :: func();

    return 0;
}