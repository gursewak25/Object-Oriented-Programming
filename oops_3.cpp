#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
    
public:
    // 1. Default Constructor: Initializes values to defaults
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor called: Length = " << length << ", Width = " << width << endl;
    }

    // 2. Parameterized Constructor: Initializes with specific values
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized Constructor called: Length = " << length << ", Width = " << width << endl;
    }

    // 3. Copy Constructor: Initializes object as a copy of another object
    Rectangle(const Rectangle &rect) {  //Passd by reference
        length = rect.length;
        width = rect.width;
        cout << "Copy Constructor called: Length = " << length << ", Width = " << width << endl;
    }

    // Function to display dimensions
    void display() const {
        cout << "Rectangle Dimensions: Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    Rectangle rect1;                  // Calls Default Constructor
    Rectangle rect2(10, 5);           // Calls Parameterized Constructor
    Rectangle rect3 = rect2;          // Calls Copy Constructor

    // Display dimensions
    rect1.display();
    rect2.display();
    rect3.display();

    return 0;
}
