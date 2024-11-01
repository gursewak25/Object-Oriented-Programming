#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Base class 2
class Mammal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

// Derived class
class Dog : public Animal, public Mammal { // Inherits from both Animal and Mammal // Multiple Inheritance
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog myDog; // Create an object of Dog class
    myDog.eat(); // Accessing method from Animal
    myDog.walk(); // Accessing method from Mammal
    myDog.bark(); // Accessing method from Dog

    return 0;
}
