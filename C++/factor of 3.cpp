#include<iostream>

using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    int** arr=new int*[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        arr[i]=new int[n+1];
        arr[i][0]=n+1;

        for(j=1;j<arr[i][0];j++)
        {
            cin>>arr[i][j];
        }
    }

    return 0;
}
