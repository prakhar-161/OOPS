#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    void bark() {
        cout << "barking" << endl;
    }
};

class Human {
    public:
    string color;

    void speak() {
        cout << "speaking" << endl;
    }
};

// Multiple Inheritance
class C : public Animal, public Human {}; 

int main() {
    C c;
    c.bark();
    c.speak();
    return 0;
}