#include<iostream>

using namespace std;

int sum(int a,int b,int c=0,int d=0)
{
    return a+b+c+d;
}

int main()
{
    cout<<"\n\n";

    cout<<"sum(12,34)       :--"<<sum(12,34)<<endl;
    cout<<"Sum(12,34,56)    :--"<<sum(12,34,56)<<endl;
    cout<<"sum(12,34,56,78) :--"<<sum(12,34,56,78)<<endl;

    cout<<"\n\n";
}