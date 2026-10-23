#include <stdio.h>
#include "fc2.c"

extern int gcd(int a, int b);


int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    int i = 0;
    int terminat = 0;
    while(terminat == 0) {
        if(i & 1) {
            n -= gcd(b,n);
        }
        else {
            n -= gcd(a,n);
        }
        if(n == 0 ) {
            if(i % 2 ) {
                printf("Bobi\n");
            }
            if((i % 2 )==0) {
                printf("Gigel\n");
            }
            terminat = 1;

        }
        i++;
    }
   
    return 0;
}