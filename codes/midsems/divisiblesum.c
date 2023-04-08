/*  Q: Write a C program to count the total number of elements divisible by 'b' (user input) in a user input array 'arr'.
    Also find out the sum of the elements divisible by 'b'. */


#include <stdio.h>

int main()
{
    int n;
    
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n], i;
    
    printf("\n Enter array elements: ");
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int b, count=0, sum=0;
    
    printf("\n Enter 'b': ");
    scanf("%d", &b);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%b==0)
        {
            count++;          //everytime a number is perfectly divisible by 'b', count is incremented
            sum=sum+arr[i];   //the divisible number is added to the total sum simultaneously
        }    
        else {}               //if the number is not divisible, the loop is simply continued
    }
    
    printf("\n Total Elements divisible by %d is %d.", b, count);
    printf("\n Sum of elements divisible by %d is %d.", b, sum);
    
    return 0;
}
