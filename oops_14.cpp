#include<iostream>
using namespace std;

class box{
    private:
    int width;
    public:
    box(){
        width = 0;
    }
    
    void displayWidth(){
        cout<<"The width is "<<width<<endl;   
    }

    friend void setWidth(box &obj , int x);      // friend function declartion which will take an object and a variable as a parameter

};

void setWidth(box &obj , int x){
    obj.width = x;
}

int main(){
   box b1;
   setWidth(b1,10);
   b1.displayWidth();
  return 0;
}