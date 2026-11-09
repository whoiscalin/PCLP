#include <stdio.h>

void swap(int *addr_a, int *addr_b) {
    int temp = *addr_a;
    *addr_a = *addr_b;
    *addr_b = temp;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}