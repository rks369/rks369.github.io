
#include<iostream>

using namespace std;

class A
{
    int x;

    public:
        A(int a)
        {
            x=a;
        }

        void display()
        {
            cout<<"Value Of X="<<x<<endl;
        }

        void operator ++()
        {
            x=++x;
        }
        
 
};
int main()
{   
    A o(5);
    cout<<"\n\n";
    cout<<"Before Overloading!!!"<<endl;
    o.display();
    ++o;
    o.operator++();
    cout<<"After Overloading!!!"<<endl;
    o.display();
    cout<<"\n\n";
    return 0;
}