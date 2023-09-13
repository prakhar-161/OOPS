#include<bits/stdc++.h>
using namespace std;

class Distance {
    private:
    int meters;
    public:
    Distance() {
        meters = 0;
    }

    void displayData() { 
        cout << "Meters value: " << meters << endl;
    }

    // friend function prototype
    friend void addValue(Distance &d);
};

// addValue function is the friend function here 
void addValue(Distance &d) {
    d.meters += 5;
}

int main() {
    Distance d1;            // meters = 0
    d1.displayData();       // 0

    // friend function call
    addValue(d1);           // pass by reference
    d1.displayData();       // 5

    return 0;
}