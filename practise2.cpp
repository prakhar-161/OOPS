#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout << "Default Constructor called" << endl;
        name = new char[100];
    }

    Hero(int health) {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    // Copy constructor
    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout << endl;
        cout << "[ Name: " << this -> name << ", ";
        cout << "Health: " << this -> health << ", ";
        cout << "Level: " << this -> level << " ]";
        cout << endl << endl;
    }

    // getter
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    // setter
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int main() {
    
    Hero h3;
    h3.setHealth(44);
    h3.setLevel('F');
    char name[10] = "Prakhar";
    h3.setName(name);
    h3.print();

    // deep copy - using the custom copy constructor
    Hero h4(h3);
    h4.print();
    // Hero h4 = h3;

    h3.name[0] = 'Z';
    h3.print();
    h4.print(); 

    // ------------------------------------------------------------------------------------------------------

    // use default copy constructor - shallow copy
    // comment out user-defined copy constructor 
    // Hero h4(h3);
    // h4.print();
    // // Hero h4 = h3;

    // h3.name[0] = 'Z';
    // h3.print();
    // h4.print();             // name of h4 also changes even though we had changed the name only for h3

    // ------------------------------------------------------------------------------------------------------

    // Copy Constructor
    // Hero h1(70, 'C');
    // h1.print();
    // Hero h2(h1);
    // h2.print();

    return 0;
}