#include <stdio.h>

int main() {
    int n, i=2, j=2;
    scanf("%d", &n);
   for(int a = 1; a<=n ; a++) {
        for(int x = 1; x <=i; x++) {
            for(int y = 1; y <= x; y++) {
                printf("*");
            }
            printf("\n");
        }
        i++;
        j++;
    }
    return 0;
}