#include<stdio.h>

void enterArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter The %d Element:--",i+1);
        scanf("%d",&arr[i]);
    }

}

void printArray(int arr[], int n)
{
    printf("\n[");
    int i;
    for (i = 0; i < n; i++)
        printf(" %d,", arr[i]);
    printf("]\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min,temp;

    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{   int arr[100];
    int n;
    printf("Enter The Number Of Element(max 100):--");
    scanf("%d",&n);
    enterArray(arr,n);
    printf("\nArray Before Sorting:--");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("\nArray After Sorting:--\n Asscending Order: ");
    printArray(arr,n);
    return 0;
}
