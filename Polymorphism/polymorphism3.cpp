#include<bits/stdc++.h>
using namespace std;

// RUN-TIME POLYMORPHISM
// Method Overriding
class Animal {
    public:
    void speak() {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout << "barking" << endl;
    }
};

class Lion : public Animal {
    public:
    void speak() {
        cout << "roar" << endl;
    }
};

int main() {
    Animal a;
    a.speak();
    Dog d;
    d.speak();
    Lion l;
    l.speak();

    return 0;
}