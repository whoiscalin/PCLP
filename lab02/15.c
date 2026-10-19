#include <stdio.h>

int main() {
    int ajutator[]={2,7,9,1,4,6,3,5,8,2,7,9};
    char cifra_CNP;
    int suma = 0;
    int i = 0;
    int ultima_cifra ;
    while(scanf("%c", &cifra_CNP) == 1) {
        int valoare = cifra_CNP - '0';
        ultima_cifra = cifra_CNP - '0';
        if(i < 12) {
            valoare *= ajutator[i++];
            suma += valoare;
        }
    }
    return 0;
}