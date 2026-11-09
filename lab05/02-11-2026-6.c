#include <stdio.h>

void swap_ptr(int **addr_p, int **addr_q) {
    int *temp = *addr_p;
    *addr_p = *addr_q;
    *addr_q = temp;
}

int main() {
    int *p = (int *)0x123;
    int *q =(int *) 0x456;
    printf("%p %p", (void *)p, (void *)q);
    printf("\n\n");
    swap_ptr(&p, &q);
    printf("%p %p", (void *)p, (void *)q);
    printf("\n\n");
}