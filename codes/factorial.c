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

An alteration of this code includes printing the factorial values of all the numbers that lead upto the user-input value. 
This can be done by simply placing the final 'printf' command inside the first loop, and by replacing 'n' with 'i'.

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
		printf("\n The factorial value of %d is %d", i, f);
	}
	
	return 0;
}
