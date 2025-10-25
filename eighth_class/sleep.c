/* sleep.c */

#include <stdio.h>
#include <unistd.h>


int main(){

    printf("Wait while prcessing...\n");
    fflush(stdout);
    sleep(2);
    printf("ok\n");

    return 0;
}