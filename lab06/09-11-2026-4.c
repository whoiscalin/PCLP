
#include <stdio.h>
#include <stdlib.h>


int** alloc_matrix_varlen(int n, int *m);
void free_matrix_varlen(int n, int **matrix);

int** alloc_matrix_varlen(int n, int *m) {
    int **matrix = (int **)malloc(n * sizeof(int *));
    if (matrix == NULL) {
        fprintf(stderr, "Eroare la alocarea matricei de pointeri.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(m[i] * sizeof(int));
        if (matrix[i] == NULL) {
            fprintf(stderr, "Eroare la alocarea liniei %d.\n", i);
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}
void print_matrix(int n, int *m, int **a) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m[i]; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void free_matrix_varlen(int n, int **matrix) {
    if (matrix == NULL) return;
    
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int n;
    
    
    if (scanf("%d", &n) != 1) return 1;

    
    int *m = (int *)malloc(n * sizeof(int));
    if (m == NULL) return 1;


    for (int i = 0; i < n; i++) {
        if (scanf("%d", &m[i]) != 1) {
            free(m);
            return 1;
        }
    }

    
    int **matrix = alloc_matrix_varlen(n, m);
    if (matrix == NULL) {
        free(m);
        return 1;
    }

    
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m[i]; j++) {
            matrix[i][j] = cnt++;
        }
    }

    
    print_matrix(n, m, matrix);
    free_matrix_varlen(n, matrix);
    free(m);

    return 0;
}