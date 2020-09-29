#include<iostream>

using namespace std;

class Result
{
    int marks;

    public:
        void getmarks(int r)
            {
                marks=r;
            }
        friend float percentage(Result R);
};

float percentage(Result R)
{
    return R.marks/5;
}

int main()
{   
    cout<<"\n";
    Result student;
    student.getmarks(459);
    cout<<"Percentage Of Sudent:-- "<<percentage(student)<<" %"<<endl;

    cout<<"\n";
    return 0;
}