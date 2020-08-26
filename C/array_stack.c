#include<stdio.h>
void push(int element, int stack[], int *top, int n)
{
    if(*top == n)
        {
        printf("The stack is already full. \n");
        }
    else
        {
        stack[(*top) + 1] = element;
        (*top)++;
        }
}

void display(int stack[],int *top)
{   
    printf("\nStack Is:--");
    for(int i=0;i<=*top;i++)
    {
        printf(" %d, ",stack[i]);
    }
    printf("\n");
}

int main() {
    int n=100,stack[100], top = -1,element;
  int ans=1;


    do
    {
      printf("\nEnter The Element to Element To Insert:--");
      scanf("%d",&element);
      push(element, stack, &top, n);
      printf("Do You want to Enter more Element(Enter 0 For EXIT):---");
      scanf("%d",&ans);
    }while (ans!=0);
    

  display(stack,&top);
  
  return 0;
}