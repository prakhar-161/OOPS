// C++ program to demonstrate the working of friend function
#include<bits/stdc++.h>
using namespace std;

// Global friend function

class Distance {
    private:
    int meters;

    public:
    Distance() {
        meters = 0;
    }
    void displayData() {
        cout << "Meter's value: " << this->meters << endl;
    }
    // function prototype or signature
    friend void addValue(Distance &d);
};

// global friend function
void addValue(Distance &d) {
    d.meters += 5;
}

int main() {
    Distance d1;
    d1.displayData();
    
    // friend function call
    addValue(d1);
    d1.displayData();

    return 0;
}