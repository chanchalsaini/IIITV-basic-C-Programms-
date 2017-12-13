#include<stdio.h>
int main(){
        printf("The first loop uses i++and the second loop uses ++i\n");
        int i;
        for(i=0;i<=4;i++){
               printf("The value of i in the first loop is %d\n",i);
        }
        for(i=0;i<=4;++i){
               printf("The value of i in the second loop is %d\n",i);
        }
        return 0;
          }
