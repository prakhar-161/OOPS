// #include "Hero.cpp"
#include<bits/stdc++.h>
using namespace std;

class Hero {

    private:
    int health;

    public:
    char level;

    Hero() {
        cout << "Constructor called" << endl;
    }

    // Paramterised Constructor
    Hero(int health) {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    void print() {
        cout << level << endl;
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

};

int main() {

    cout << "Program Started" << endl;
    // static
    Hero dhamu(10);
    cout << "Address of dhamu: " << &dhamu << endl;
    dhamu.print();

    // dynamic
    Hero *d = new Hero(11);
    d->print();

    Hero temp(50, 'E');
    temp.print();

    /*
    // static
    Hero a;
    a.setHealth(78);
    a.setLevel('C');
    cout << "level of a: " << a.level << endl;
    cout << "health of a: " << a.getHealth() << endl;

    // dynamically
    Hero *b = new Hero;
    b->setLevel('D');
    b->setHealth(64);
    cout << "level of b: " << b->level << endl;
    cout << "health of b: " << (*b).getHealth() << endl;
    */

    /*
    Hero hero;
    // cout << 'size of Hero: ' << sizeof(hero) << endl;           

    // hero.health = 85;
    // hero.level = 'B';

    hero.setHealth(80);
    hero.setLevel('B');

    cout << "Health of Hero is: " << hero.getHealth() << endl; 
    cout << "level is: " << hero.level << endl;
    cout << "size: " << sizeof(h1);
    */
    
    return 0;
}



