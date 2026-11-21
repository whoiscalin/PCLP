#include <stdio.h>
#include <stdlib.h>
void my_swap(int **v, int **w, int n) {
    int *aux = *v;
    *v = *w;
    *w = aux;
    // for(int i = 0; i < n; i++) {
    //     printf("%d ", *(v+i));
    // }
    // printf("\n");
    
    // for(int i = 0; i < n; i++) {
    //     printf("%d ", *(w+i));
    // }
    // printf("\n");
}

int main() {
    int n = 5;
    int *v=malloc(n*sizeof(int));
    if(v == NULL) {
        free(v);
        return 1;
    }
    int *w=malloc(n * sizeof(int));
    if(w == NULL) {
        free(w);
        return 1;
       
    }
    for(int i = 0; i < n ; i++) {
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n ; i++) {
        scanf("%d", &w[i]);
    }
    my_swap(&v, &w, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", *(v+i));
    }
    printf("\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d ", *(w+i));
    }
    printf("\n");
    free(v);
    free(w);
}