#include <stdio.h>


void my_memset(void *v, char value, int n) {
    char *p = v;
    for(int i = 0; i < n; i++) {
        *p = value;
        p++;
    }
}
int main() {
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    my_memset((void *)v, 1, 4);
    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}