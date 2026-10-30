#include <stdio.h>

#define MAX 100

int binarySearch(int n, int v[], int x) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int middle = low + (high - low) / 2;
        if(x == v[middle]) {
            return middle;
        }
        if( x < v[middle]) {
            high = middle - 1;
        } else  {
            low = middle + 1;
        }
    }
    return -1;
}

int main() {

    int n;
    int v[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int x;
    scanf("%d", &x);
    int poz_x = binarySearch(n, v, x);
    printf("%d", poz_x);
    return 0;
}