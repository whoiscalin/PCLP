#include <stdio.h>
#include <stdlib.h>

void read_vect(int *n, int **v) {
    scanf("%d", n);
    int *array=(int *)calloc(*n, sizeof(int ));
    if(array == NULL) {
        free(array);
        fprintf(stderr, "Alocarea nu a avut succes");
        return;
    }
    for(int i = 0; i < *n; i++) {
        scanf("%d ", &array[i]);
    }
    *v = array;
   
}
void print_vect(int n, int *v) {
    for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }
}
int main() {
    int n;
    int *v;
    read_vect(&n, &v);
    print_vect(n, v);
    free(v);
}