#include <stdio.h> 
  

void towerOfHanoi(int n, char beg, char end, char aux) 
{ 
    if (n == 1) 
    { 
        printf("\n Move disk 1 from rod %c -> %c", beg, end); 
        return; 
    } 
    towerOfHanoi(n-1, beg, aux, end); 
    printf("\n Move disk %d from rod %c -> %c", n, beg, end); 
    towerOfHanoi(n-1, aux, end, beg); 
} 
  
int main() 
{ 
    int n;
    printf("\nEnter The Numger Of Disk:--");
    scanf("%d",&n);
    printf("\n");
    towerOfHanoi(n, 'A', 'C', 'B'); 
    printf("\n\n");
    return 0; 
} 