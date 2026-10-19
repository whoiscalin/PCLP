#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int oglindit(int n) {
    int oglindit = 0;
    while (n > 0){
        int cifra = n % 10;
        oglindit = oglindit * 10 + cifra;
        n /= 10;
    }
    return oglindit;
}

bool este_palindrom(int n) {
    return n == oglindit(n);
}

int main() {
    int n, copie_n;
    scanf("%d", &n);
    copie_n = n;
    if(este_palindrom(n)){
        printf("%d este palindrom\n", copie_n);

    }
    else {
        printf("%d nu este palindrom\n", copie_n);
    }
    return 0;
}