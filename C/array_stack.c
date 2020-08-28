#include<stdio.h>

int stack[100]={11,22,33,44,55,66,77,88,};
int n=100,top = 7,element;

void push()
{   
  printf("\nEnter The Element to Element To Insert:--");
    scanf("%d",&element);

    if(top == n)
        {
        printf("The stack is already full. \n");
        }
    else
        {
        stack[top + 1] = element;
        top++;
        }
}


void pop()
{
  if(top<0)
  {
    printf("\nStack Is Underflow!!!");
  }
  else
  {
    stack[top]=0;
    top--;
    printf("\n POP The elemet SucecessFully!!!\n");
  }
  
}


int main() 
{
  printf("\nArray Stack Befor POP Operation");

   printf("\nStack Is:--");
    for(int i=0;i<=top;i++)
    {
        printf(" %d, ",stack[i]);
    }
    printf("\n");

  pop();
  
  printf("\nArray Stack After POP Operation");

   printf("\nStack Is:--");
    for(int i=0;i<=top;i++)
    {
        printf(" %d, ",stack[i]);
    }
    printf("\n");
  
  return 0;
}