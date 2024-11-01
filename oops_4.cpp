#include<iostream>
#include<string>
using namespace std;

class car{
    private:
     string model;
     int year;

     public:

     car(string model , int year)
     {
        this -> model = model;
        this -> year = year;
     }

     void display(){
        cout<<"The car is "<<model<<" and the year is "<<year<<endl;
     }
};

int main(){
    car toyota("Fortuner" , 2003);
    toyota.display();
    return 0;
}
