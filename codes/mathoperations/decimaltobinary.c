#include <stdio.h>

int main()
{
    int i, j, n, dec, arr[32]={0};
    
    printf("\n Enter a number: ");
    scanf("%d", &n);
    
    dec=n;
    
    for(i=0;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    
    for(j=(i-1);j>=0;j--)
    {
        printf("%d", arr[j]);
    }
    
    return 0;
}
