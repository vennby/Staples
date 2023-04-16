#include <stdio.h>

void prime(int a)
{
    int i, flag;
    
    for(i=2;i<a;i++)
    {
        (a%i==0)?flag==1:flag==0;
    }
    
    flag==0?printf("\n Non-Prime."):printf("\n Prime.");
}

void even(int a)
{
    (a%2==0)?printf("\n Even"):printf("\n Odd.");
}

void factorial(int a)
{
    int i, f=1;
    
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("\n Factorial = %d", f);
}

void magic(int a)
{
	int m=a, o, sum=0, rem, rev=0;

	while(a>0)
   	{
   	    sum=sum+a%10;
   	    a=a/10;
    }
	
	printf("\n Sum of digits: %d", sum);
    
    o=sum;
	
	while(sum>0)
   	{
   	    rem=sum%10;
   	    rev=rev*10+rem;
   	    sum=sum/10;
    }
	
	printf("\n Reverse of the number = %d", rev);
    
	if (o*rev==m)
	printf("\n %d is a Magic Number, since %d*%d=%d", m, o, rev, m);
	else
	printf("\n %d is not a Magic Number.", m);
}

int main()
{
    int n, rep, num, i, op;
    
    printf("\n How many operations? \n");
    scanf("%d", &rep);
    
    for (i=0;i<rep;i++)
    {
        printf("\n Enter number %d: ", i+1);
        scanf("%d", &n);
            
        printf("\n 1-Prime Number \n 2-Odd or Even \n 3-Factorial \n 4-Magic Number");
        printf("\n Pick: ");
        scanf("\n %d", &op);
            
        switch(op)
        {
            case 1: prime(n); break;
            case 2: even(n); break;
            case 3: factorial(n); break;
            case 4: magic(n); break;
            default: printf("\n Pick one of the two.");
        }
    }
    
    return 0;
}
