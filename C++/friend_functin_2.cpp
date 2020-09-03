#include<iostream>

using namespace std;

class ABC;
class XYZ;

class ABC
    {
        int x;

        public:

        void setdata(int a)
            {
                x=a;
            }
            
        int sum(XYZ);
    };

class XYZ
    {
        int y;

        friend int ABC :: sum(XYZ);

        public:

        void setdata(int a)
            {
                y=a;
            }
    };

int ABC::sum(XYZ b)
{
    return x+b.y;
}

int main()
{   
    ABC obj1;
    XYZ obj2;

    cout<<"\n";

    obj1.setdata(23);
    obj2.setdata(43);

    cout<<"Sum Is:--"<<obj1.sum(obj2)<<"\n";
    
    cout<<"\n";
    return 0;
}