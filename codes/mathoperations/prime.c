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
            printf("\n %d is not prime. \n", n);
            flag=1;    
            break;
        }    
    }
    
    if(flag==0)    
    printf("\n %d is prime.", n);
    else
    {
        printf("\n The factors of %d are: 1 %4d", n, n);
        
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            printf("%4d", i);
        }
    }
    
    return 0;  
 } 
