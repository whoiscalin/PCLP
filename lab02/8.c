#include <stdlib.h>
#include <stdio.h>

int numar(int n) {
    int numar_nou = 0;
    int putere = 1;
    int copie = n / 10;
    while(copie > 0) {
        int cifra = copie % 10;
        numar_nou = numar_nou + cifra*putere;
        putere *= 10;
        copie /= 100;

    }
    return numar_nou;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",numar(n));
} 