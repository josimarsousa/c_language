/* if.c */

#include <stdio.h>

int main (){

    int x = 5;
    int velocity;

    if(x > 4){
        printf("the number %d is greather than 4\n", x);
    }

    printf("How fast are you driving in km/h? \n");
    scanf("%d", &velocity);

    if(velocity > 100){
        printf("You are driving too fast, carefull!\n");
    }

    else if(velocity <= 80){
        printf("You are driving safely!\n");
    }

    else {
        printf("You are driving close to the safety limit!\n");
    }

    return 0;
}