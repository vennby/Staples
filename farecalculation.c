#include <stdio.h>

int main()
{
    int days, i, mode;
    
    printf("\n Enter the number of days: ");
    scanf("%d", &days);
    
    printf("\n Enter 1 for bus, 2 for metro, 3 for cab.");
    printf("\n");
   
    float distance, sum=0;
    
    for(i=1;i<=days;i++)
    {
        printf("\n Enter mode for day %d: ", i);
        scanf("%d", &mode);
        printf("\n Enter distance for day %d in km: ", i);
        scanf("%f", &distance);
        switch(mode)
        {
            case 1: sum=sum+(3*distance); break;
            case 2: sum=sum+(5*distance); break;
            case 3: sum=sum+(9*distance); break;
            default: printf("\n Enter one of the three mentioned modes of transport.");
        }
    }
    printf("\n The total fare for %d days = %f", days, sum);

    return 0;
}
