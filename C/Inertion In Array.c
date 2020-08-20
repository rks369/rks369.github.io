#include<stdio.h>

int main()
{
    int arr[51],item,position,i,n;

    printf("Enter The Size Of Array (max. 50):--");
    scanf("%d",&n);
    printf("Enter The Elements Of The Array!!!\n");

    for(i=0;i<n;i++)
    {
        printf("Enter The %d Element:--",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements:-- \n");

    for(i=0;i<n;i++)
    {
        printf("%d , ",arr[i]);
    }

    printf("\nEnter The Element Of Insert:--");
    scanf("%d",&item);
    printf("Enter The Element Position:--");
    scanf("%d",&position);

    i=n-1;

    for (i = n; i >= position; i--)
        arr[i+1] = arr[i];

    arr[position-1]=item;
    n+=1;

    printf("\nItem Inserted Successfully!!\n");

    printf("\nArray Elements:-- \n");

    for(i=0;i<n;i++)
    {
        printf("%d , ",arr[i]);
    }

    return 0;
}
