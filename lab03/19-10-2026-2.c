#include <stdio.h>
#include "utils.h"

int main() {
    int n;
    scanf("%d", &n);
    int count = count_digits(n);
    
    printf("Numarul %d are %d cifre.\n", n, count);
}