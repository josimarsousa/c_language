/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main(){

    int number = 5;

    printf("Número de vezes da contagem: %d\n\n", number);

    while (1)
    {
      printf("%d\n", number);
      sleep(1);
      number = number -1;

      if(number < 1){
        break;
      }
    }
    
    return 0;
    
}