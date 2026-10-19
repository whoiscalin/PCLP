#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VALUE 1000

bool este_prim(int n) {
    if( n<2) {
        return false;
    }
    for(int i = 2; i * i <=n; i++){
        if(n%i == 0) {
            return false;
        }
    }
}



void divizori(int n) {
    int d[MAX_VALUE];
    if(este_prim(n)) {
        printf("%d este prim", n);
        return;
    }
    else {
    printf("Divizorii lui %d sunt: ", n);
    
        for (int i = 2; i * i < n; i++) {
            if (n % i == 0) {
                printf("%d ", i);
               
            }
            d[k++]=n/i;

        }
    }
}

int main() {
    int n;
    int prime = 0;
    while (scanf("%d", &n) == 1) {
        
        if(este_prim(n)){
            prime++;
        }
        if(n < 0){
            printf("S-au gasit %d numere prime\n", prime);
            return 0;
        }
        else divizori(n);
        printf("\n");
    }
    return 0;
}