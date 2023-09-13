#include<bits/stdc++.h>
using namespace std;

class Base;

class anotherClass {
    public:
    void memFunc(Base &obj);
};

class Base {
    private:
    int private_variable;
 
    protected:
        int protected_variable;
    
    public:
    Base() {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend function declaration
    friend void anotherClass :: memFunc(Base&);
};

void anotherClass::memberFunction(Base& obj) {
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable;
};
 
int main() {
    Base object1;
    anotherClass object2;
    object2.memFunc(object1);

    return 0;
}