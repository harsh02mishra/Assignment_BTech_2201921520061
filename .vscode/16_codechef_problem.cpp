/*
@CodeChef
https://www.codechef.com/learn/course/college-oops-cpp/CPOPCPP07/problems/OPCPP250
*/
#include <iostream>
#include <string>
using namespace std;

// Base class Animal
class Animal {
protected:
    string name;

    Animal(string name) : name(name) {}
};

// Derived class Dog
class Dog : public Animal {
public:
    string breed;

    Dog(string name, string breed) : Animal(name), breed(breed) {}

    void displayInfo() {
        cout << name << endl;
        cout << breed << endl;
    }
};

int main() {
    string name,breed;
    cin >> name >> breed ;
    // Create a Dog object
    Dog myDog( name , breed );

    // Display information about the Dog
    myDog.displayInfo();

    return 0;
}