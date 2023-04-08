// Q: Write a C program to see if the number is perfect (ex: 145 = 1! + 4! + 5!).

#include <stdio.h>

int main()
{
    int n;
    
    printf("\n Enter number: ");
    scanf("%d", &n);
    
    int i, j, rem, temp=n, f=1, sum=0;
    
    for(i=0;n>0;i++)            //running an 'i' loop for  controlled iterations
    {
        rem=n%10;               //picking out the last digit of the number
        
        f=1;                    //initializing factorial value with each iteration
        
        for(j=1;j<=rem;j++)     //running a 'j' loop for factorial of selected digit
        {
            f=f*j;
        }
        
        sum=sum+f;              //adding final factorial value to the total sum
        
        n=n/10;                 //reducing the number of digits with each iteration
    }
    
    if(sum==temp)
    printf("\n The number %d is a special number.", temp);
    else
    printf("\n The number %d is not a special number.", temp);
    
    return 0;
}
