#include<iostream>

using namespace std;

class A
{
    int x;

    public:
        A()
        {
            x=0;
        }

        A(int a)
        {
            x=a;
        }

        void display()
        {
            cout<<"Value Of X="<<x<<endl;
        }

        friend A operator--( A );
        
};
        
    A operator --(A o)  
        {
            o.x=--o.x;
            return o;
        }

int main()
{   
    A o(5),o1;
    cout<<"\n\n";
    cout<<"Before Overloading!!!"<<endl;
    o.display();
    o1=--o;
    cout<<"After Overloading!!!"<<endl;
    o1.display();
    cout<<"\n\n";
    return 0;
}
