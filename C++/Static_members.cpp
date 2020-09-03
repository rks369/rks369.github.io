#include<iostream>

using namespace std;

class student
{
    static int count;

    int rollno;
    char name[20];

    public:

    void enter()
    {
        cout<<"\nEnter The Roll No:--";
        cin>>rollno;
        cout<<"Enter The Name:--";
        cin>>name;
        count++;
    }

    void display()
    {
        cout<<"\nName   :-- "<<name;
        cout<<"\nRoll No:-- "<<rollno;
        cout<<"\n";
    }

    static void no_of_student()
    {
        cout<<"\nNumber Of Studnet Registered:---"<<count<<"\n";
    }
};

int student::count=0;

int main()
{   
    student a,b;
    cout<<"\n";
    a.enter();
    a.display();
    b.enter();
    a.display();
    a.no_of_student();
    cout<<"\n";
    return 0;
}