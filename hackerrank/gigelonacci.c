#include <stdio.h>

int gigel(int p, int q, int n) {
    if(n == 0) {
        return p;
    }
    if( n == 1) {
        return q;
    }
    return gigel(p, q, n - 1) ^ gigel(p, q, n-2);
}

int main() {
    int p, q, n;
    scanf("%d %d %d", &n, &p, &q);
    printf("%d", gigel(p,q,n));
    return 0;
}