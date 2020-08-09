#include <iostream>

using namespace std;
struct student
{
    char name[20];
    int rollno, marks1,marks2;
    float per;

    void enter()
    {
        cout<<"Enter The Name Of The Student:--";
        cin>>name;
        cout<<"Enter The Roll No:--";
        cin>>rollno;
        cout<<"Enter The Marks In English:--";
        cin>>marks1;
        cout<<"Enter The Marks In Hindi:--";
        cin>>marks2;
    }

    void display()
    {
        cout<<"\nName:--"<<name;
        cout<<"\nRoll No:--"<<rollno;
        cout<<"\nMarks In English:--"<<marks1;
        cout<<"\nMarks In Hindi:--"<<marks2;

        per=((marks1+marks2)/200)*100;

        cout<<"Percentage Is:--"<<per;
    }
};


int main()
{
    struct student s1;
    s1.enter();
    s1.display();
    return 0;
}
