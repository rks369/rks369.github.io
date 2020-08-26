#include<iostream>

using namespace std;

inline void sum(int a,int b)
{
    cout<<"\nSum Of "<<a<<" & "<<b<<" Is "<<a+b<<"\n";
}

int main()
{
    cout<<"\n";
    sum(12,23);
    cout<<"\n";
    return 0;
}