#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
    // Private data member: accessible only within the class
private:
    string name;

    // Protected data member: accessible within the class and derived classes
protected:
    int age;

    // Public data member: accessible from anywhere
public:
    // Constructor to initialize the name and age
    Animal(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayInfo()
    {
        cout << "Animal Name: " << name << ", Age: " << age << endl;
    }
};


// Derived class
class Dog : public Animal // Inherits publicly from Animal
{
private:
    string breed;

public:
    // Constructor to initialize name, age, and breed
    Dog(string n, int a, string b)
    {
        Animal(n, a);
        breed = b;
    }

    void displayDogInfo()
    {
        displayInfo(); // Calling base class public method
        cout << "Dog Breed: " << breed << endl;
    }

    void setAge(int a)
    {
        age = a; // Accessing protected member from the base class
    }
};


int main()
{
    Dog myDog("Buddy", 3, "Golden Retriever");

    // Accessing public member function of Dog class
    myDog.displayDogInfo();

    // Accessing public member function to set age
    myDog.setAge(4);

    // Display updated information
    cout << "After setting new age:" << endl;
    myDog.displayDogInfo();

    return 0;
}
