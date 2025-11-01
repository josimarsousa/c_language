/* struct.c */

#include <stdio.h>
#include <string.h>

struct person
{
    char name[14];
    char lastname[14];
    int age;

};

int main() {

    struct person birch;
    
    strncpy(birch.name, "doctor", 13);
    strncpy(birch.lastname, "birch", 13);
    birch.age = 45;

    printf("%s %s of the age %d\n",
            birch.name,
            birch.lastname,
            birch.age);

    return 0;
    
}