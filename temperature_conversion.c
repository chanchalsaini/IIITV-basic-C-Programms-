#include <stdio.h>
#include <stdlib.h>
// Temperature conversion from farenhiet to celcius.

int main()
{
    float f,c;
    printf("enter the temerature in farenhiet\n");
    scanf("%f",&f);
    c=(f-32)/9*5;
    printf("the temperature in degree celcius is %f",c);
    return 0;


}
