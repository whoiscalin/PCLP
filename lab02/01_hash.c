#include <stdio.h>
#include <stdlib.h>


int hash(int x) {
    if(x == 0) return 0;
    if(x < 0) {
        x = abs(x);
    }
    int copie = x, nr_cifre = 1;
    
    while(copie){
        copie /= 10;
        nr_cifre *= 10;
    }
    int auxiliar = x;
    auxiliar = auxiliar % (nr_cifre/10);
    auxiliar /= 10;
    
    int cc = 0;
    while(auxiliar){
        cc+=auxiliar % 10;
        auxiliar /=10;
    }
    int p = nr_cifre / 10;
    int prima_cifra = x / p;
    int ultima_cifra = x % 10;
    return cc+prima_cifra*2 + ultima_cifra*2;
}
int main() {
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("%d\n", hash(x));
    }

    return 0;
}