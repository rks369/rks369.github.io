// Swapping Two Variable Using Pointer Varaibele

#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter The Value Of A:--";
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
    cout<<"\n";

    return 0;
}
