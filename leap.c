#include <stdio.h>
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    if(num%4 == 0)
    {
        if( num%100 == 0)
        {
                if ( num%400 == 0)
                printf("%d is a leap year.", num);
            else
                printf("%d is not a leap year.", num);
        }
        else
            printf("%d is a leap year.", num );
    }
    else
        printf("%d is not a leap year.", num);
        return 0;
}
