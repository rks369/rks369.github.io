#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,j,row,col;
    cin>>n>>q;
    if((n>=1&&n<1E6)&&(q>=1&&q<1E6))
    {
        int** arr=new int*[n];
        for(i=0;i<n;i++)
        {
            cin>>n;
            arr[i]=new int[n+1];
            arr[i][0]=n+1;

            for(j=1;j<arr[i][0];j++)
            {
                cin>>arr[i][j];
            }

        }
        int** pos=new int*[q];
        for(i=0;i<q;i++)
        {
            pos[i]=new int[2];
            for(j=0;j<2;j++)
            {
                cin>>pos[i][j];
            }

        }
        for(i=0;i<q;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<"\n"<<pos[i][j]<<"\n";
            }
        }

    }
    else
    exit(0);
    return 0;
}
