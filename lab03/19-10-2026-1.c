#include <stdio.h>
#include "utils.h"

int main() {
    int n , k ;
    scanf("%d %d", &n, &k);
    long long mod_recursiv =  power_recursive(n,k);
    long long mod_iterativ = power_iterative(n,k);
    long long mod_logaritmic =   power(n,k);
    printf("Recursiv, %d la puterea %d este %lld\n", n, k, mod_recursiv);
    printf("Iterativ, %d la puterea %d este %lld\n", n, k, mod_iterativ );
    printf("Logaritmic, %d la puterea %d este %lld\n", n, k, mod_logaritmic);
    return 0;

}