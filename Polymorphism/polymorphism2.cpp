#include<bits/stdc++.h>
using namespace std;

// OPERATOR OVERLOADING
class B {
    public:
    int a;
    int b;

    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output: " << value2 - value1 << endl;
    }

    void operator- (B &obj) {
        cout << "hello" << endl;
    }

    void operator() () {
        cout << "i am a bracket " << this -> a << endl;
    }
};

int main() {
    // + to be overloaded
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    // - to be overloaded
    B obj3, obj4;
    obj3.a = 1;
    obj4.a = 3;
    obj4 - obj3;

    // () to be overloaded
    obj1();

    return 0;
}