#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int log2, log10;
    int copie_n = n;
    while(copie_n/2) {
        copie_n/=2;
        log2++;
    }
    int i = 1, ok = 1;
    copie_n = n;
    while(copie_n/10) {
        copie_n/=10;
        log10++;
    }

    printf("log2(%d) = %d\n", n, log2);
    printf("log10(%d) = %d\n", n, log10);
    return 0;
}