#include<iostream>

using namespace std;

int prime(int num)
{   int prime_c=1;
    for (int i = 2; i <num; ++i)
        {
            if(num%i==0)
                {prime_c=0;
                    break;}
        }
    if(prime_c==0)
        return 0;
    else
        return 1;
}

int check(int a, int b)
{   int p=0;
    int i,count=0;

    for(i=a;i>0;i--)
    {
        if(a%i==0)
        {   cout<<i<<endl;
            count++;
            if(i==b)
                return --count;
            else
            {
                p=prime(i);
                if(p==1)
                {   count++;
                    for(i=b;i>0;i--)
                        {
                            if(b%i==0)

                            {
                                cout<<i<<endl;
                                count++;
                                p=prime(i);
                                if(p==1)
                                {
                                    --count;
                                    i=0;
                                }
                            }
                        }
                }
            }

        }

    }

    return count;

}

int main()
{
    int x,y,result;
    cin>>x>>y;
    if(x==y)
    {
        result=0;
    }
    else if(x>y)
    {
        result=check(x,y);
    }
    else
    {
        result=check(y,x);
    }

    cout<<result;
    return 0;
}
