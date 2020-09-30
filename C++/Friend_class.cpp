#include<iostream>

using namespace std;

class ABC;
class XYZ;

class ABC
    {
        int x,y;

        friend class XYZ;

        public:

        void setdata(int a,int b)
            {
                x=a;
                y=b;
            }
    };

class XYZ
    {
        public:
            int sum(ABC a)

            {
                return a.x+a.y;
            }
    };



int main()
{   
    ABC obj1;
    XYZ obj2;

    cout<<"\n";

    obj1.setdata(23,56);

    cout<<"Sum Is:--"<<obj2.sum(obj1)<<"\n";
    
    cout<<"\n";
    return 0;
}