#include <stdio.h>

void my_swap(int **v, int **w) {
    int *temp = *v;
    *v = *w;
    *w = temp;
}

int main() {
    int v[]={1, 2, 3, 4, 5};
    int w[]={6, 7, 8, 9, 10};
    int *p1=v;
    int *p2=w;
    my_swap(&p1, &p2);
    for(int i = 0; i < 5; i++) {
        printf("%d ", p1[i]);
    }
}