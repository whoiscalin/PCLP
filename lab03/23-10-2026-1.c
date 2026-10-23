#include <stdio.h>
//#include "fc2.c"
#include <stdbool.h>

extern bool is_Prime(int a);
extern void print_closest_prime(int x);

int main() {
    int n;
    scanf("%d", &n);
    while( n > 0) {
        print_closest_prime(n);
        scanf("%d", &n);
    }
    return 0;
}