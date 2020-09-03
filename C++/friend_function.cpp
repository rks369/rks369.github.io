#include<iostream>

using namespace std;

class ABC;
class XYZ;

class ABC
{
    int x;

    friend int max(ABC,XYZ);

    public:

    void setdata(int a)
    {
        x=a;
    }
};

class XYZ
{
    int y;
    friend int max(ABC,XYZ);

    public:

    void setdata(int a)
    {
        y=a;
    }
};

int max(ABC a,XYZ b)
{
    if(a.x>b.y)
        return a.x;
    else
    {
        return b.y;
    }
    
}

int main()
{   
    ABC obj1;
    XYZ obj2;
    cout<<"\n";

    obj1.setdata(23);
    obj2.setdata(43);

    cout<<"Maximam Is:--"<<max(obj1,obj2);
    
    cout<<"\n";
    return 0;
}