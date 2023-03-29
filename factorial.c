#include <stdio.h>

int main()
{
	int n, i, j, f;
	printf("\n Enter the value of 'n': ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
	}
	printf("\n The factorial value of %d is %d", n, f);
	
	return 0;
}	
