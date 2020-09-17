#include<iostream>

using namespace std;

class A
{
    protected:
       int rollno;

    public:
        void inputA(int a)
        {
            rollno=a;
        }

};


class B:public A
{
    protected:
        int Marsk;
    
    public:
        void inputB(int r)
        {
            Marsk=r;
        }

        void display()
        {
            cout<<"Roll No:--"<<rollno<<endl;
            cout<<"Total Marks:--"<<Marsk<<endl;
        }
};

int main()
{   
    
    cout<<"\n";
    B o;
    o.inputA(123);
    o.inputB(479);
    o.display();
    cout<<"\n";
    return 0;
}