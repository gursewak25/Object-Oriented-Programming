#include<iostream>
using namespace std;

class print{
    public:
    int real;
    int img;

   void show(int i){
    cout<<i<<endl;
   }

    void show(char c){
        cout<<c<<endl;
    }


};

int main(){
    print p1;
    p1.show(1);
    p1.show('%');
    return 0;
}