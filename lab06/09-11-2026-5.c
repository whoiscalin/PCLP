#include <stdio.h>
#include <stdlib.h>

void free_matrix_varlen(int n, int **matrix) {
    if (matrix == NULL) return;
    
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrice_statica[100][100]={0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &(matrice_statica[i][j]));
        }
    }
    int **dynamic_matrix=malloc(n * sizeof(int *));
    if(dynamic_matrix == NULL) {
        free(dynamic_matrix);
        return 1;
    }
    for(int i = 0; i < n; i++) {
        dynamic_matrix[i] = calloc(m, sizeof(int));
        if(dynamic_matrix[i] == NULL ){
            for(int j = 0; j < i; j++) {
                free(dynamic_matrix[j]);
            }
            free(dynamic_matrix);
            return 1;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &dynamic_matrix[i][j]);
        }
    }
    if(n > 0 && m > 0) {
        int *p = &matrice_statica[1][0];
        int *q = &matrice_statica[0][99];
        int *r = &dynamic_matrix[1][0];
        int *s = &dynamic_matrix[0][m-1];
        printf("%p\n%p\n %ld ", p, q, (p-q));
        printf("\n%p\n%p\n %ld ", r, s, (r-s));
    }
    free_matrix_varlen(n, dynamic_matrix);
   // printf("%ld", sizeof(int));
    return 0;
}