/* random.c */

#include <stdio.h>
#include <stdlib.h>

int our_random_function(){
    
    int x;

    x = rand();
    return x;

}

int main(){

    int random;

    random = our_random_function();
    printf("%d\n", random);

    return 0;
    
}