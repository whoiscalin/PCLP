#include <stdio.h>
#include <stdlib.h>

int  *alloc_matrix(int n, int m) {
    int *v = malloc(n*m * sizeof(int));
    if(v == NULL) {
        free(v);
    
        perror("Alocarea nu a avut loc.");
        return NULL;
    }
    return v;
}
int *access_elem(int *mat, int m, int i, int j) {
    return mat + ( i * m + j);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *v = alloc_matrix(n, m);
    for(int i = 0; i < n *m; i++) {
        scanf("%d", v+i);
    }
    int i, j;
    scanf("%d %d", &i, &j);
    for(int i = 0; i < n * m; i++) {
        if(i % m == 0) {
            // printf("%d", *(v+i));
            printf("\n");
            printf("%d ", *(v+i));

        }   else {
            printf("%d ", *(v+i));
        }
    }
    free(v);
    printf("\n");

    int val = *(access_elem(v, m, i, j));
    return 0;
}