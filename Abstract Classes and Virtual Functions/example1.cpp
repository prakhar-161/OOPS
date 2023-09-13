#include<bits/stdc++.h>
using namespace std;

// base class
class Animal {
    public:
    void eat() {
        cout << "I am eating generic food" << endl;
    }
};

// derived class
class Cat: public Animal {
    public:
    void eat() {
        cout << "I am eating cat food" << endl;
    }
};

// derived class
class Dog : public Animal {
    public:
    void eat() {
        cout << "I am eating dog food" << endl; 
    }
};

void func1(Animal *xyz) {
    xyz -> eat();
}

int main() {
    Animal *ptr;
    Cat catObj;
    Dog dogObj;

    ptr = &catObj;
    func1(ptr);

    ptr = &dogObj;
    func1(ptr);


    // normal overriding
    // Cat c;
    // c.eat();

    return 0;
}