#include <stdio.h>
#include <math.h>
#define  PI 3.1416
#define  MAX_PATH 180
int main()
{
    int angle;
    float x,y;
    angle = 0;
    printf(" Angle   cos(angle)\n\n");


    while(angle<=MAX_PATH)
          {
            x=(PI/180)*angle;
            y=cos(x);
            angle=angle+10;
            printf("%d  %0.5f\n", angle,y);
          }

    return 0;
}
