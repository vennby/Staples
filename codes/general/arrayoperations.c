#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter the number of elements in the required array: ");
    scanf("%d", &n);
    
    int i, arr[n];
    
    printf("\n Enter the %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\n The elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    
    //printing elements in the reverse order
    
    printf("\n The elements in the reverse order are: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    
    //summing the elements in the array
    
    int sum=0;
    
    printf("\n The sum of the elements in the array is = ");
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);
    printf("\n");
    
    /*
    copying the elements of one array into another array, 
    using copied array for performing different operations
    */
    
    int arr2[n];
    
    printf("\n The double of the elements in the array: ");
    for(i=0;i<n;i++)
    {
        arr2[i]=2*arr[i];
        printf("%d \t", arr2[i]);
    }
    printf("\n");
    
    //counting the total number of duplicate elements
    
    int count=0;
    
    printf("\n The total number of duplicate elements in the array = ");
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        count=count+1;
    }
    printf("%d", count);
    
    return 0;
}
