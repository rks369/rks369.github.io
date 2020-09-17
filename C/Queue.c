//Program to Implement Operation On Array Queue

#include<stdio.h>
#include<stdlib.h>

int Q[100];
int front=-1;
int rear=-1;
int n=100;

void Qinsert()
{   
    int add_item;
    if(rear == n-1)
    {
        printf("Queue Is Overflow!!!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            
        printf("Insert The Element In Queue:--");
        scanf("%d",&add_item);
        rear=rear+1;
        Q[rear]=add_item;
        
    }  
}

void Qdelete()
{
    if (front == -1 ||front>rear)
    {
        printf("Queue Is Under Flow !!!");
        return;
    }
    else
    {
        printf("Elemet Deleted From Queue Is %d !!!\n",Q[front]);
        front=front+1;
    }
    
}

void Qdisplay()
{   
    int i;
    if(front==-1)
    {
        printf("Queue Is Empty !!!");
    }
    else
    {
        printf("Queue Is :-- \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",Q[i]);
        }
        printf("\n");
    }
    
}
int main()
{   
    int choice;
    printf("\n");
    while (1)
    {
        printf("1. Insert Element To Queue .\n");
        printf("2. Delete Element From Queue .\n");
        printf("3. Display all Elements of Queue .\n");
        printf("4. Exit!!\n");
        printf("Enter Your Choice:--");
        scanf("%d",&choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            Qinsert();
            break;
        case 2:
            Qdelete();
            break;
        case 3:
            Qdisplay();
            break;
        case 4:
            exit(0);
        default:
            printf("You Enter The Wrong choice!!\n");
            break;
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}