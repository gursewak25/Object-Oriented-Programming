#include<iostream>
#include<string>
using namespace std;

class Teacher{
     public :
    // Data Members ( Properties / Attributes)
    string name;
    string dept;
    string subject;
    double salary;

    //Member Functions (Methods)
    void changeDept(string newDept){
        dept = newDept;
        cout<<"Department is "<<dept<<endl;
    }
};

int main(){
    // Object Creation 
    Teacher T1;
    Teacher T2;
    Teacher T3;

    T1.dept = "Maths";
    
    // Accessing Class Members
    T1.changeDept("Science");

    return 0;
}