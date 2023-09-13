#include<bits/stdc++.h>
using namespace std;

// FUNCTION OVERLOADING
class A {
    public:
    void greet() {
        cout << "hello, world" << endl;
    }

    int greet(char name, int n) {
        cout << "hello " << name << endl;
        return n;
    }

    void greet(string name) {
        cout << "hello " << name << endl;
    }
};

// function overloading with Default Arguements
int add(int x, int y, int z = 0, int w = 0) {
    return x + y + z + w;
}

int main() {
    A obj;
    obj.greet("prakhar");    

    cout << add(20, 10) << endl;     
    cout << add(10, 40, 60) << endl;
    cout << add(30, 20, 50, 80) << endl;
    return 0;
}