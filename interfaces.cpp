#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    virtual void sound() = 0;           // pure virtual function

    void sleeping() {
        cout << "Sleeping" << endl;
    }
};
// Animal class is an abstract class because its atleast one of the function here, i.e. sound() is pure virtual function.

class Dog : public Animal {
    public:
    void sound() {
        cout << "Woof" << endl;
    }
};

int main() {
    Dog obj;
    obj.sound();
    obj.sleeping();

    return 0;
}