#include<iostream>
using namespace std;

class parent{
  public:
  virtual void show(){
    cout<<"Parent"<<endl;
  }
};

class child : public parent{
public:
void show(){
    cout<<"Child"<<endl;
}
};

int main(){
    parent p1;
    child c1;
    p1.show();
    c1.show();
    return 0;
}