#include<iostream>

using namespace std;

class shape

{
    protected:
        int x,y;
    
    public:
        void get(int a,int b)
        {
            x=a;
            y=b;
        }
};

class rectangle:public shape
{
    public:
        void Area()
        {
            cout<<"Area of Rectangle is:---"<<x*y<<endl;
        }
};

class triangle:public shape
{
    public:
        void Area()
        {
            cout<<"Arear Of Triangle:---"<<1/2*x*y<<endl;
        }

};

int main()
{   
    cout<<"\n";
    
    rectangle r;
    r.get(12,34);
    r.Area();

    triangle t;
    r.get(6,7);
    r.Area();

    cout<<"\n";
    return 0;
}