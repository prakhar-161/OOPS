#include<bits/stdc++.h>
using namespace std;

// INHERITANCE

class Human {
    private:
    int age;

    public:
    int height;
    int weight;

    int getAge() {
        return this -> age;
    }
    
    void setWeight(int w) {
        this -> weight = w;

    }
};

class Male : protected Human {
    public:
    string color;

    void sleep() {
        cout << "Male sleeping" << "\n";
    }

    // for protected case for inherited class Male
    int getHeight() {
        return this->height;
    }
    void setHeight(int h) {
        this->height = h;
    }
};


int main() {

    Male m1;
    // protected inheritance
    m1.setHeight(30);
    cout << m1.getHeight();

    

    /*
    Male obj1;
    cout << obj1.age << "\n";
    cout << obj1.weight << "\n";
    cout << obj1.height << "\n";
    cout << obj1.color << "\n";
    obj1.setWeight(65);
    cout << obj1.weight << "\n";
    obj1.sleep();
    */

    return 0;
}