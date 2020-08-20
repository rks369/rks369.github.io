#include<stdio.h>

int main()
{
   int first, last, mid, n, i, item, list[100];

   printf("Enter the size of the list: ");
   scanf("%d",&n);

   printf("Enter %d integer values in Asscending order!!\n\n", n);

   for (i = 0; i < n; i++)
   {
       printf("Enter The %d Element:--",i+1);
       scanf("%d",&list[i]);
   }


   printf("\nEnter value to be search: ");
   scanf("%d", &item);

   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (list[mid] < item)
         first = mid + 1;
      else if (list[mid] == item) {
         printf("\nElement found at %d index & %d Position\n",mid,mid+1);
         break;
      }
      else
         last = mid - 1;

      mid = (first + last)/2;
   }
   if (first > last)
      printf("\nElement Not found in the list.\n");

}
