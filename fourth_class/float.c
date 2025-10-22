/* float.c */

// %s - string of characters
// %d - integer numbers
// %f - float (decimal) numbers

#include <stdio.h>

int main(){

    //area
    //radius * radius * PI

    float radius, pi, area;

    pi = 3.14;
    printf("What is the radius in cm?\n");
    scanf("%f", &radius);

    area = radius*radius*pi;
    printf("the result of the area is: %.3f cm\n", area);


}