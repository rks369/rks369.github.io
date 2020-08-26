#include<iostream>

using namespace std;

void area(float r)
{
    cout<<"\nArea Of Circle Of radius "<<r<<" Is :-- "<<3.14*r*r;
}

void area(float l,float b)
{
    cout<<"\nArea Of Rectangle side "<<l<<" & "<<b<<" Is :-- "<<l*b;
}

int main()
{
    cout<<"\n";
    area(6.7);
    area(23.3,54.5);
    cout<<"\n\n";
    return 0;
}