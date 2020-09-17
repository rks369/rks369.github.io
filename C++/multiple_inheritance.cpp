#include<iostream>

using namespace std;

class A
{

    protected:
        int x;
    public:
        void getA(int a)
        {
            x=a;
        }
};

class B
{
    protected:
        int y;
    public:
        void getB(int a)
        {
            y=a;
        }
};

class C:public A,public B
{
    public:
        int max()
        {
            if(x>y)
                return x;
            else
                return y;
        }

};

int main()
{   
    cout<<"\n";
    
    C o;
    o.getA(12);
    o.getB(45);

    cout<<"Largest Number Is:--"<<o.max()<<endl;

    cout<<"\n";
    return 0;
}