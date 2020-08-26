#include<iostream>

using namespace std;

class Student
{
    private:
    int rollno;
    char name[80];
    char Class[10];
    int marks[5];
    int per;
    char grade;

    void enter_marks()
    {   int total=0;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter The Marks In "<<i+1<<" Subject :--";
            cin>>marks[i];
            total+=marks[i];
        }

        per=total/5;
    }

    void cal_grade()
    {
        if(per>=90)
            grade='A';
        else if (per>=80)
            grade='B';
        else if (per>=70)
            grade='C';
        else if (per>=60)
            grade='D';
        else if (per>=33)
            grade='E';
        else
            grade='F'; 
    }
    public:

    void enter()
    {
        cout<<"Enter The Name Of Student    :--";
        cin>>name;
        cout<<"Enter The Roll No Of Student :--";
        cin>>rollno;
        cout<<"Enter The Class              :--";
        cin>>Class;
        cout<<"Enter The Marks In Five Subject!!!\n";
        enter_marks();
        cal_grade();

    }

    void dispaly()
    {
        cout<<"\nName    :--"<<name;
        cout<<"\nRoll No :--"<<rollno;
        cout<<"\nClass   :--"<<Class;
        cout<<"\nGrade   :--"<<grade;
    }
};

int main()
{
    cout<<"\n";
    Student s;
    s.enter();
    s.dispaly();
    cout<<"\n";
    return 0;
}