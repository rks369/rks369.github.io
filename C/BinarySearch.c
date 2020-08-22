//Binary Search

#include<stdio.h>

int main()
{
   int Arr[100],n,i,item,first,last,mid,index=-1;

   printf("Enter the size of the Array (max 100):--");
   scanf("%d",&n);

   printf("\nEnter %d integer values in Asscending order!!\n\n", n);

   for (i = 0; i < n; i++)
   {
       printf("Enter The %d Element:--",i+1);
       scanf("%d",&Arr[i]);
   }


   printf("\nEnter value to be search: ");
   scanf("%d", &item);

   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) 
      {
         if (Arr[mid]==item)
            {
               index=mid;
               break;
            }
         else if (Arr[mid]>item) 
            {
               first=mid+1;
            }
         else
            last = mid-1;
         mid = (first + last)/2;
      }
   if (index==-1)
      printf("\nElement Not found in the list.\n");
   else
      printf("\nElement Found At %d Index And %d Positon!!\n",index,index+1);

   return 0;

}
