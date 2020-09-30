#include<iostream>

using namespace std;

class Box
{   
    int l,b;

    public:
         Box()
        {
            cout<<"Object Is Created!!"<<endl;
        }

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

        ~Box()
        {
            cout<<"Object Is Destructed!!"<<endl<<endl;
        }
    
};

void Box:: area()
    {
        cout<<"\nArea Is:--"<<l*b<<endl;;
    }


int main()
{   
    cout<<"\n";
    Box a;
    cout<<"\n";
    a.input();
    a.display();
    a.area();
    cout<<"\n";
    return 0;
}