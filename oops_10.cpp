#include<iostream>
using namespace std;

class shape{   // as this class has a pure virtual function, it is an abstract class
   virtual void draw() = 0;   // pure virtual function
};

class circle : public shape{
public:
void draw(){
    cout<<"circle drawn"<<endl;
}
};

int main(){
    circle c1;
    c1.draw();
    return 0;
}