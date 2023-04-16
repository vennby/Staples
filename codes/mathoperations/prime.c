#include <stdio.h>  

int main()
{    
    int n, i, flag=0;    
    
    printf("\n Enter a number: ");    
    scanf("%d", &n);
    
    for(i=2;i<=n/2;i++)    
    {    
        if(n%i==0)    
        { 
            printf("\n %d is not prime.", n); 
            printf("\n The smallest number it is divisible by is %d.", i);    
            flag=1;    
            break;
        }    
    }    
    
    if(flag==0)    
    printf("\n %d is prime.", n);     
    
    return 0;  
 } 
