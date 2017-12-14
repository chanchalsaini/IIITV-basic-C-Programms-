#include<stdio.h>
#include<math.h>
void main(){
         int num,i,j,temp,sum=0;
         printf("Enter  a number\n");
         scanf("%d", &num);
         temp=num;
         while(num>0)
              {
                i=num%10;
                sum+=i*i*i;
                num=num/10;
              }
          if(sum==temp)
              {
               printf("Given number %d is an armstrong number\n",temp);
              }
         else
             {
              printf("Given number %d is not an armstrong number since the sum of cubes of individual digits is %d\n,temp,sum");
             }
 }
         
