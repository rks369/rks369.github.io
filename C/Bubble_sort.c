//Insertion Sort
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

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
        for (j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]);  
}

int main()
{   int arr[100];
    int n;
    printf("Enter The Number Of Element(max 100):--");
    scanf("%d",&n);
    enterArray(arr,n);
    printf("\nArray Before Sorting:--");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("\nArray After Sorting:--\n Asscending Order: ");
    printArray(arr,n);
    return 0;
}
