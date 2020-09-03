#include<stdio.h>

int stack[100];
int n=100,top,element;

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

void diaplay()
{
   printf("\nStack Is:--");
    for(int i=0;i<=top;i++)
    {
        printf(" %d, ",stack[i]);
    }
    printf("\n");
}

int main() 
{
  int ans;
  do
  {
    printf("\nMenu:--");
    printf("\n1.) Push The Element!");
    printf("\n2.) Pop The Element!");
    printf("\n3.) Display!");
    printf("\n4.) Exit");
    printf("\n\tEnter Your Choice:--");
    scanf("%d",&ans);
    switch (ans)
    {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        diaplay();
        break;
      default:
        printf("\nYou Enter The Wrong Choice!!!\nTry Again");
        break;
    }
  } while (ans!=4);
  
  
  return 0;
}