#include<stdio.h>
//Code to print the following star pattern.
           // **********
           // ****  ****
           // ***    ***
           // **      **
           // *        *

int main(){
    int no_of_lines, i, j;

    printf("Enter number of lines : ");
    scanf("%d", &no_of_lines);

    for( i=1 ; i<=no_of_lines ; i++ ){

        for( j=0 ; j<=(no_of_lines-i) ; j++ ){
            printf("*");
              }

        for( j=1 ; j<i ; j++ ){
            printf("  ");
        }

        for( j=0; j<=(no_of_lines-i) ; j++ ){
            printf("*");
        }


        printf("\n");
    }


    return 0;
    }
