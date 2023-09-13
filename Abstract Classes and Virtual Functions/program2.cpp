#include<bits/stdc++.h>
using namespace std;

// PURE VIRTUAL FUNCTIONS

class Shape {
    public:
    virtual void getArea() = 0;                 // pure virtual function
};

class Circle : public Shape {
    public:
    void getArea() {
        cout << "Enter radius of circle: ";
        int r;
        cin >> r;
        cout << "Area of circle is: " << (3.14*r*r) << endl;
    }
};

class Rectangle : public Shape {
    public:
    void getArea() {
        cout << "Enter length and breadth of rectangle: ";
        int l, b;
        cin >> l >> b;
        cout << "Area of rectangle is: " << l*b << endl;
    }
};

int main() {
    // Circle c1;
    // c1.getArea();
    Rectangle r1;
    r1.getArea();
    return 0;
}