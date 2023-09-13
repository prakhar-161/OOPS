// destructor 
#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

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

    static int random() {
        return timeToComplete;
    }

    // destructor
    ~Hero() {
        cout << "Destructor called" << endl; 
    }
};

// static keyword
int Hero :: timeToComplete = 5;

int main() {

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    /*
    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();
    delete b;
    */

    return 0;
}