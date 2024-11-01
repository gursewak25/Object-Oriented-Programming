#include<iostream>
using namespace std;

class fun{
    public:
    fun(){
        cout<<"Object Created"<<endl;
    }
    ~fun(){
        cout<<"Object Destroyed"<<endl;
    }

};

int main(){
    if(true){
         static fun f1;
    }

    cout<<"Last line of code"<<endl;
    return 0;
}