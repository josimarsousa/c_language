/* while.c */

#include <stdio.h>

int main() {

    int x;

    // while
    //do 
    
    while(1){
        printf("Do you wish to quit? Press 1. \n");
        scanf("%d", &x);
        if(x == 1){
           return 0;
        }
    } 
    return 0;
}