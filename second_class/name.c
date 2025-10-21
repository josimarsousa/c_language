/*pegando nome com scanf*/
#include <stdio.h>


int main(){

    char name[30];

    printf("Hello, What is your name?\n");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}