#include<iostream>

using namespace std;

class A
{
    protected:
        int a;
    protected:
        int b;
    public:
        int c;
};

class B:protected A
{
    protected:
        int x;
    protected:
        int y;
    public:
        int z;

        void getdata()
        {
            //cin>>a; It Will Generate erorr   because it is private data member of base class A and it is not inherited
            cin>>b;     //this will not genrate erorr because it will become protected member of B
            cin>>c;     //this will not genrate erorr because it will become protected member of B
            cin>>x;
            cin>>y;
            cin>>z;
        }

        void putdata()
        {
           // cout<<"a:"<<a<<endl; It Will Generate erorr  because it is protected data member of base class A and it is not inherited
            cout<<"b:"<<b<<endl;    //this will not genrate erorr because it will become protected member of B
            cout<<"c:"<<c<<endl;    //this will not genrate erorr because it will become protected member of B
            cout<<"x:"<<x<<endl;
            cout<<"y:"<<y<<endl;
            cout<<"z:"<<z<<endl;
        }
};

int main()
{   
    
    cout<<"\n";

    B o;
    //o.a=10; This will generate erorr because it will not inheritaed in B from A
    //o.b=20; This will generate erorr because it will be the protected member of B because it will inherited from A As protected
    //o.c=30; This will generate erorr because it will be the protected member of B because it will inherited from A As protected
    //o.x=10; This will generate erorr because it is the private data member of B
    //o.y=20; This will generate erorr because it is the protected data member of B
    o.z=30;
    o.getdata();
    o.putdata();
    //All Above are not generate error because it is public to B
    
    cout<<"\n";
    return 0;
}