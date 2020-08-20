#include <iostream>

using namespace std;

long factorial(int n)
{
    long fact=1;
    for(long i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    long n;
    cout<<"Enter The Value To Find Factorial:--";
    cin>>n;
    cout<<"Factorial Of"<<n<<" Is:--"<<factorial(n)<<"\n";
    return 0;
}
