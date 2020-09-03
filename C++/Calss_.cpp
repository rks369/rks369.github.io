#include<iostream>

using namespace std;

class Box
{   
    int l,b;

    public:
        

    void input()
    {
        cout<<"Enter The Length Of Box:--";
        cin>>l;
        cout<<"Enter The Breadth Of Box:--";
        cin>>b;
    }

    void display()
    {
        cout<<"\nLength:--";
        cout<<l;
        cout<<"\nBreadth:--";
        cout<<b;
    }

    void area();
   
};

void Box:: area()
    {
        cout<<"\nArea Is:--"<<l*b;
    }


int main()
{   
    Box a;
    cout<<"\n";
    a.input();
    a.display();
    a.area();
    cout<<"\n";
    return 0;
}