/* while.c */

#include <stdio.h>

int main() {

    int x = 0;

    // while
    //do 
    
    while(x ){
        printf("Do you wish to quit? Press 1. \n");
        scanf("%d", &x);
        if(x != 0){
           printf("O sistema foi encerrado!");
           break;

        }
         printf("important! the system running");
         return 0;
    } 
   
}