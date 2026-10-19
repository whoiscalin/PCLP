#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d ", n);
    while(n>1){
       
        if(n&1) {
            n = n/2 + 1;
            printf("%d ", n);
        }
        else {
            n --;
            printf("%d ", n);
        }
    }
    //printf("%d", n);
    return 0;
}