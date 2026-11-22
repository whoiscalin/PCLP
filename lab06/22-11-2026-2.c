#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if(x < y) {
        return -1;
    }
    if(x > y) {
        return 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    int *w = NULL;
    if(v == NULL) {
        free(v);
        return 1;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    // printf("\n---------------\n");
    //  for(int i = 0; i < n; i++) {
    //     printf("%d ", v[i]);
    // }
    qsort(v, n, sizeof(v[0]), comp);
    int capacity = 0;
    for(int i = 0; i < n ; i++) {
        if(i == 0 || v[i] != v[i-1] ) {
            capacity++;
            int *tmp = realloc(w, capacity * sizeof(int));
            if(tmp == NULL) {
                free(v);
                free(w);
                return 1;
            } else {
                w = tmp;
            }
            w[capacity - 1] = v[i];
        }
    }
    for(int i = 0; i < capacity; i++) {
        printf("%d ", w[i]);
    }
    printf("\n---------------\n");
    //printf("%d", n);
    free(v);
    free(w);
    return 0;

}