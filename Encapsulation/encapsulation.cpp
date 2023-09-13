#include<bits/stdc++.h>
using namespace std;

// ENCAPSULATION

class Student {
private:
    string name;
    int age;
    int height;

public:
    int getAge() {
        return this -> age;
    }

    void setAge(int age) {
        this -> age = age;
    }
};

int main() {

    Student s1;
    s1.setAge(14);
    cout << "Age: " << s1.getAge() << "\n";

    cout << "Encapsulation acheived" << "\n";    
    return 0;
}