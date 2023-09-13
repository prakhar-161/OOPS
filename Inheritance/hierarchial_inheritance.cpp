#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void func1()  {
        cout << "this is the first function" << endl;
    }
    void func2() {
        cout << "this is the second function" << endl;
    }
};

class B : public A {
    public:
    void funcB1() {
        cout << "this is the third function" << endl; 
    }
};

class C : public A {};

class D : public B {};
 
int main() {
    B b;
    b.func1();

    C c;
    c.func2();

    D d;
    d.funcB1();
    return 0;
}