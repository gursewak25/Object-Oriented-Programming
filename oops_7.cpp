#include<iostream>
using namespace std;

class complex{
   public:
   int real;
   int img;

   complex(int r = 0 , int i = 0){
    real = r;
    img = i;
   }

   complex operator+(const complex &obj){
    complex res;
    res.real = obj.real + real;
    res.img = obj.img + img;        // simple way : return ( real + obj.real , img + obj.img );
    return res;
   }

   void show(){
     cout << "Result: " << real << " + i" << img << endl;
   }

};

int main(){
    complex s1(10,20) , s2(30,40);
    complex s3 = s1+s2;
    s3.show();



    return 0;
}
