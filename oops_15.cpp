#include <iostream>
using namespace std;

class function
{
private:
    int data;

public:
    friend class function2;
};

class function2
{
public:
    void setData(function &obj, int x)
    {
        obj.data = x;
    }
    void getData(function &obj)
    {
        cout << obj.data << endl;
    }
};

int main()
{
    function f;
    function2 f1;

    f1.setData(f, 10);
    f1.getData(f);

    return 0;
}