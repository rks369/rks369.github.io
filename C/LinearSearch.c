//Linear Search

#include <stdio.h>


int main()
{
	int arr[100];
	int n,i,item,index=-1;
	printf("\nEnter The Number Of Elements:--");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("Enter The %d Element:--",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter The Item To Search:--");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(item==arr[i])
            {index=i;
            break;}
    }
	if (index == -1)
		printf("Element is not present in the array\n") ;
	else
		printf( "Element found at position %d",index+1,"\n\n") ;

	return 0;
}

