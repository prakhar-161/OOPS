#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    void speak() {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal {

};

class GermanShephard : public Dog {

};

int main() {
    GermanShephard gs;
    gs.speak();
    return 0;
}