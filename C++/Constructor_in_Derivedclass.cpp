#include<iostream>

using namespace std;

class A
{
    public:
        A()
        {
            cout<<"Constructor Of A!!!"<<endl;
        }
};

class B:public A
{
    public:
        B()
        {
            cout<<"Constructor Of B!!!"<<endl;
        }
};
int main()
{   
    
    cout<<"\n";
    
    B o;
    cout<<"\n";
    return 0;
}