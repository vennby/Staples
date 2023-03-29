#include <stdio.h>

int main()
{
	int r, c;
	
	printf("\n Enter the number of rows and columns in the matrix: ");
	scanf("%d%d", &r, &c);
	
	int A[r][c], i, j;
	
	printf("\n Enter the %d elements in the matrix: ", r*c);
	
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        scanf("%d", &A[i][j]);
	    }
	}
	
	printf("\n The matrix is as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        printf("%d \t", A[i][j]);
	    }
	}
	
	printf("\n The diagonal elements of the matrix are as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        if(i==j)
	        printf("%d \t", A[i][j]);
	        else
	        printf("\t");
	    }
	}
	
	int sum=0;
	
	printf("\n The trace of the matrix is = ");
	
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        if(i==j)
	        sum=sum+A[i][j];
	    }
	}
	printf("%d", sum);
	
	printf("\n The upper triangular elements are as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        if(i<=j)
	        printf("%d \t", A[i][j]);
	        else
	        printf("\t");
	    }
	}
	
	printf("\n The lower triangular elements are as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        if(j<=i)
	        printf("%d \t", A[i][j]);
	        else
	        printf("\t");
	    }
	}
	
	int B[r][c];
	
	printf("\n Enter the %d elements in the matrix:", r*c);
	
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        scanf("%d", &B[i][j]);
	    }
	}
	
	printf("\n The sum of the 2 matrices is as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        printf("%d \t", A[i][j]+B[i][j]);
	        
	    }
	}
	
	printf("\n The difference of the 2 matrices is as follows: ");
	
	for(i=0;i<r;i++)
	{
	    printf("\n");
	    for(j=0;j<c;j++)
	    {
	        printf("%d \t", A[i][j]-B[i][j]);
	        
	    }
	}
	
	return 0;
}
