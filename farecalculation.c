#include <stdio.h>

int main()
{
    float b, m, c;
    
    printf("\n Enter the cost per km for bus, metro, and cab: ");
    scanf("%f%f%f", &b, &m, &c);
    
    int days, i, mode;
    
    printf("\n Enter the number of days: ");
    scanf("%d", &days);
    
    printf("\n Enter 1 for bus, 2 for metro, 3 for cab: ");
    scanf("%d", %mode);
   
    float distance, sum=0;
    
    for(i=1;i<=days;i++)
    {
        printf("\n Enter mode for day %d: ", i);
        scanf("%d", &mode);
        printf("\n Enter distance for day %d in km: ", i);
        scanf("%f", &distance);
        switch(mode)
        {
            case 1: sum=sum+(b*distance); break;
            case 2: sum=sum+(m*distance); break;
            case 3: sum=sum+(c*distance); break;
            default: printf("\n Enter one of the three mentioned modes of transport.");
        }
    }
    printf("\n The total fare for %d days = %f", days, sum);

    return 0;
}
