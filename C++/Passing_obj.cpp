#include<iostream>

using namespace std;

class M
{
    int inches;
    int feet;

    public:
    
    void enter()
    {
        cout<<"\nEnter The Measurement In Feets:--";
        cin>>feet;
        cout<<"\nEnter The Measurement In Inches:--";
        cin>>inches;
    }

    void display()
    {
        cout<<"\nMeasurement Is:-- "<<feet<<" Feet and "<<inches<<" Inches!!";
    }

    void convert(M a,M b)
    {
        inches=a.inches+b.inches;
        feet=inches/12;
        inches=inches%12;
    }
};


int main()
{   
    M t1,t2,t3;
    cout<<"\n";
    t1.enter();
    t2.enter();
    t3.convert(t1,t2);
    t3.display();
    cout<<"\n";
    return 0;
}