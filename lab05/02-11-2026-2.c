#include <stdio.h>

#define MAX 100

int main() {
    int n, v[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%d %p\n", v[i], (void *)&v[i]);
    }
    //o adresa e mai mare cu sizeof(int) decat adresa precedenta

    return 0;
}