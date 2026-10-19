#include <stdio.h>
#include <stdlib.h>

#define MY_SIZE_OF(tip) ((char *)((tip *)0 + 1) - (char *)((tip *)0))

int main(){
    printf("Mod 1\n");
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Mod 2\n");
    printf("Size of short int: %lu bytes\n", MY_SIZE_OF(short int));
    printf("Size of int: %lu bytes\n", MY_SIZE_OF(int));
    printf("Size of long int: %lu bytes\n", MY_SIZE_OF(long int));


    return 0;
}