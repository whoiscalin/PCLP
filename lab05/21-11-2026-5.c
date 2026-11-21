#include <stdio.h>

void my_sizeof_int(int *a) {
    char *p = (char *)a;
    int count = 0;
    while((int *)p  < a+1) {
        count++;
        p++;
    }
    printf("Size of int is: %d\n", count);
}
void my_sizeof_short(short *a) {
    char *p = (char *)a;
    int count = 0;
    while((short *)p  < a+1) {
        count++;
        p++;
    }
    printf("Size of short is: %d\n", count);
}
void my_sizeof_char(char *a) {
    char *p = a;
    int count = 0;
    while(p  < a+1) {
        count++;
        p++;
    }
    printf("Size of char is: %d\n", count);
}
void my_sizeof_int_star(int **a) {
    char *p = (char *)*a;
    int count = 0;
    while((int *)p  < *a+1) {
        count++;
        p++;
    }
    printf("Size of int* is: %d\n", count);
}

void my_sizeof_long(long *a) {
    char *p =(char *)a;
    int count = 0;
    while((long *)p  < a+1) {
        count++;
        p++;
    }
    printf("Size of long is: %d\n", count);
}

int main() {
    int a =10;
    short b;
    char c;
    int *d;
    long e;
    my_sizeof_int(&a);
    my_sizeof_short(&b);
    my_sizeof_char( &c);
    my_sizeof_int_star(&d);
    my_sizeof_long(&e);
}