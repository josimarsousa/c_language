/* numbers.c */

/* 

    %s a string of chars
    %d a integer 

*/

#include <stdio.h>

int main() {

    int x, y, result;

    printf("Please input a number: \n");
    scanf("%d", &x);

    printf("Please input another number: \n");
    scanf("%d", &y);

    printf("the numbers typed are: %d %d\n", x,  y);

    result = x + y;

    printf("the result of the sum is: %d\n", result);

    return 0;

}