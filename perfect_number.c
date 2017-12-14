#include<stdio.h>
#incude<math.h>
void main(){
            int num,rem,i,sum=0;
            printf("Enter a number\n");
            scanf("%d", &num);
            for(i=1;i<num;i++)
            {
             rem=num%i;
             if(rem==0)
               {
                sum=sum+i;
               }
             }
             if(sum==num)
                printf("Entered number is perfect number\n");
             else
                printf("Entered number is not a perfect number\n");
 }
             
            
         
           
