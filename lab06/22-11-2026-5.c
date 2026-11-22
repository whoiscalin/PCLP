#include <stdio.h>
#include <stdlib.h>
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int **v = malloc(n * sizeof(int *));
    if(v == NULL) {
        free(v);
        return 1;
    }
    for(int i = 0; i < n; i ++) {
        v[i]= malloc(m * sizeof(int *));
        if(v[i] == NULL) {
            for(int j = 0; j < i; j++) {
                free(v[j]);
            }
            free(v);
            return 1;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
        }
    }
    int r = 1, c = 4;
    int **mat = matrixReshape(v, n, )
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    free(v);
}