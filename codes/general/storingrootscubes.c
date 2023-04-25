/* A more dynamic and intuitive approach to the question from the textbook:
   Declare one array for storing the square roots of the integers from 0 through 10
   and a second array for storing the cubes of the same integers.*/

#include <stdio.h>

int main()
{
    
    int upp;
    
    printf("\n Enter an upper bound: ");
    scanf("%d", &upp);
    
    int n, i, count=0;
    
    for(n=1;n<upp;n++)
    {
        for(i=1;i<=n;i++)
        {
            if(n==i*i)
            {
                count++;
                break;
            }
        }
    }
    
    printf("\n There are %d integers between 1 to %d that have a perfect square root.", count, upp);
    
    int roots[count], cubes[count], number[count], j, k;
    
    for(n=1;n<upp;n++)
    {
        for(i=1,j=0;i<=n,j<count;i++,j++)
        {
            if(n==i*i)
            {
                number[j]=n;
                roots[j]=i;
                cubes[j]=n*n*n;
                break;
            }
        }
    }
    
    printf("\n");
    
    printf("\n These integers are:");
    
    for(j=0,k=1;j<=count,k<=count;j++,k++)
    {
        printf("\n %d. %d", k, number[j]);
    }    
    
    printf("\n");
    
    printf("\n The square roots of these integers are:");
    
    for(j=0,k=1;j<=count,k<=count;j++,k++)
    {
        printf("\n %d. %d", k, roots[j]);
    }
    
    printf("\n");
    
    printf("\n The cubes of these integers are:");
    
    for(j=0,k=1;j<=count,k<=count;j++,k++)
    {
        printf("\n %d. %d", k, cubes[j]);
    }

    return 0;
}
