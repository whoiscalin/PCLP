#include <stdio.h>

#define MAX 100


void scan_array(int *n, int *v) {
    scanf("%d", n);
    for(int i = 0; i < *n; i++) {
        scanf("%d", (v+i));
    }
}

int main() {
    int v[MAX];
    int n ;

    scan_array(&n, v);
    return 0;
}