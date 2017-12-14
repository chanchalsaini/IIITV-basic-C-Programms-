#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the year\n");
    scanf("%d",&n);

    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
                printf("the year %d is leap",n);
            else
                printf("the year %d is not leap",n);
        }
        else
            printf("%d is leap year",n);
    }
    else
        printf("%d is not leap year",n);
    return 0;
}
