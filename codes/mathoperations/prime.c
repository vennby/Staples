#include <stdio.h>

int main()
{
    int a, i, flag;
    
    printf("\n Enter a number: ");
    scanf("%d", &a);
    
    for(i=2;i<a;i++)
    {
        (a%i==0)?flag==0:flag==1;
    }
    
    (i==a)?flag=1:flag==0;
    
    flag==0?printf("\n Non-Prime."):printf("\n Prime.");
    
    return 0;
}
