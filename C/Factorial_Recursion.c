#include <stdio.h> 

long factorial(int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{   
    int num;
    printf("\nEnter The Number To Find Factorial:--"); 
    scanf("%d",&num);
    printf("Factorial of %d is %d\n\n", num, factorial(num)); 
    return 0; 
} 