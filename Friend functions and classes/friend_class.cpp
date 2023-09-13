// friend class
#include<bits/stdc++.h>
using namespace std;

class myClass1 {
    friend class myClass2;          // myClass2 is a friend of myClass1
    private:
    int x;

    public:
    myClass1(int a) {
        this->x = a;
    }
};

class myClass2 {
    public:
    void showData(myClass1 &obj) {
        cout << "x value: " << obj.x << endl;
    } 
};

int main() {
    myClass1 obj1(5);
    myClass2 obj2;
    obj2.showData(obj1);

    return 0;
}
