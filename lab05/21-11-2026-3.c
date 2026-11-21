#include <stdio.h>
#include <stdlib.h>
void swap(int *addr_a, int *addr_b) {
    *addr_a = *addr_b ^ *addr_a;
    *addr_b = *addr_a ^ *addr_b;
    *addr_a = *addr_b ^ *addr_a;
}
void my_reverse(int *v, int n){
    for(int i = 0; i < n / 2; i++) {
        
        swap((v+i), (v+n-i-1));
    }
}

int main() {
    int n = 5;
    int *v=malloc(n*sizeof(int));
    if(v == NULL) {
        free(v);
        return 1;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", (v+i));
    }
    my_reverse(v, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", *(v+i));
    }
    printf("\n");
    free(v);
}