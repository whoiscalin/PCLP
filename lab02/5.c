#include <stdlib.h>
#include <stdio.h>

long long int factorial(int n) {
    if(n<0) {
        return -1;
    }
    else if(n==0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    long long int result = factorial(n);
    if(result == -1) {
        printf("Factorialul nu e definit pe numere negative\n");
    }
    else {
        printf("%lld\n", result);
    }
    return 0;
}