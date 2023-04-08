// Q: Write a program in C to check whether a given matrix is an identity matrix or not.

#include <stdio.h>

int main()
{
    int r, c;
    
    printf("\n Input number of rows for the matrix: ");
    scanf("%d", &r);
    
    printf("\n Input number of columns for the matrix: ");
    scanf("%d", &c);
    
    int a[r][c], i, j;
    
    printf("\n Input elements in the first matrix: ");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n element - [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }    
    }
    
    printf("\n The matrix is: ");
    
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d \t", a[i][j]);
        }    
    }
    
    int flag=1;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)            //if-condition to check the diagonal elements
            {
                if(a[i][j]!=1)  //if the diagonal element is anything but 1, flag=0, loop is broken
                {
                    flag=0;
                    break;
                }   
            }
            else                //else-condition to check the non-diagonal elements
            {
                if (a[i][j]!=0)
                {
                    flag=0;     //if the diagonal element is anything but 0, flag=0, loop is broken
                    break;
                }
            }
        }
    }
    
    if (flag==0)
    printf("\n The matrix is not an identity matrix.");
    else
    printf("\n The matrix is an identity matrix.");
    
    return 0;
}
