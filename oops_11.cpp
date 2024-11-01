#include<iostream>
using namespace std;

void function(){
    static int x = 0;   
    cout<<x<<endl;
    x++;
}

int main(){
    function();
    function();
    function();
    function();
    return 0;
}

// if we didn't use static, everytime the function will be called, the function ( x included in the function ) will be pushed in the call stack and popped out once the function will be finished.
// using static makes only one copy of x and will be stored differently, when we ++x , the value will be stored as it is and the next time value 1 will be used as only one copy is made.