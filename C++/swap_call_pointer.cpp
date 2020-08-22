#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nValues In Function";
    cout<<"\nA:"<<*a;
    cout<<"\nB:"<<*b;
}

int main()
{
    int a,b;

    cout<<"\nEnter The Value Of A:--";
    cin>>a;
    cout<<"Enter The Value Of B:--";
    cin>>b;
    cout<<"\nValues Before Swapping";
    cout<<"\nA:"<<a;
    cout<<"\nB:"<<b;
    swap(&a,&b);
    cout<<"\nValues After Swapping";
    cout<<"\nA:"<<a;
    cout<<"\nB:"<<b;
    cout<<"\n\n";

    return 0;
}