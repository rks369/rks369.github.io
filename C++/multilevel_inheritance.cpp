#include<iostream>

using namespace std;

class A
{
    protected:
        int rollno;
    
    public:
        void input(int a)
        {
            rollno=a;
        }

        void dispaly()
        {
            cout<<"Rolll Number Is:--"<<rollno<<endl;
        }
};

class B: public A
{
    protected:
        int sub1,sub2;

    public:
        void inputB(int x,int y)
        {
            sub1=x;
            sub2=y;
        }

        void dispalyB()
        {
            cout<<"Marks In Subject 1:--"<<sub1<<endl;
            cout<<"Marks In Subject 2:--"<<sub2<<endl;
        }
};

class C:public B
{
    int result;
    
    public:
        void marks()
        {
            result=sub1+sub2;
            dispaly();
            dispalyB();
            cout<<"Total Marks:--"<<result<<endl;
        }

};

int main()
{   
    
    cout<<"\n";
    
    C o;
    o.input(001);
    o.inputB(98,87);
    o.marks();

    cout<<"\n";
    return 0;
}