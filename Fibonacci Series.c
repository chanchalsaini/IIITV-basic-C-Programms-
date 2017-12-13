#include<stdio.h>
void main()
{
 int a=0,b=1,c,num,i;
 printf("Enter the number of elements");
 scanf("%d",&num);
 for(i=2;i<num;++i)
    {
     c=a+b;
     a=b;
     b=c;
    }
 }
