/* dice.c */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int myRandom(int max){
    int x = rand() % max +1;

    return x;
}


int main() {

    int balance, bet, guess, dice;

    srand(getpid());

    balance = 1000;
    printf("Make your bet: ");
    fflush(stdout);
    scanf("%d", &bet);

    printf("Make your guess (1-6, and 0 means quit): \n");
    scanf("%d", &guess);

    if(guess == 0)
    return 0;

    sleep(2);
    dice = myRandom(6);
    printf("%d\n", dice);

    return 0;


}
