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

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
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
    insertionSort(arr,n);
    printf("\nArray After Sorting:--\n Asscending Order: ");
    printArray(arr,n);
    return 0;
}
