#include<iostream>
using namespace std;

class balance{
    public:
    static int dadbal ;
    int ownbal = 0;

    void pocketmoney(int x){
       cout<<"i got rupees "<<x<<endl;
       dadbal -= x;
       cout<<"remaining balance of dad is rupees "<<dadbal<<endl;
    }

};

int balance::dadbal = 2000;

int main(){
    balance c1 , c2 , c3;
    c1.pocketmoney(100);
    c2.pocketmoney(200);
    c3.pocketmoney(400);
    return 0;
}