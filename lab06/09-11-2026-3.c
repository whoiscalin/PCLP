#include <stdio.h>
#include <stdlib.h>
int **alloc_matrix(int n, int m) {
    int **matrix = (int **)calloc(n, sizeof(int *));
    if(matrix == NULL) {
        fprintf(stderr, "Alocare esuata\n");
        free(matrix);
        return NULL;
    }
    for(int i = 0; i < n; i++) {
        matrix[i]=(int *)calloc(m, sizeof(int ));
        if(matrix[i]==NULL) {
        fprintf(stderr, "Alocarea liniei a esuat\n");
        for(int j = 0; j < i; j++) {
            free(matrix[j]);
        }
        free(matrix);
        return NULL ;
    }
    }
    return matrix;
}
void read_matrix(int n, int m, int **a) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void print_matrix(int n, int m, int **a) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void free_matrix(int n, int **a) {
    for(int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    // int **v = (int **)calloc(n, sizeof(int *));
    // if(v == NULL) {
    //     fprintf(stderr, "Alocarea a esuat");
        
    //     free(v);
    //     return 1;
    // }
    // for(int i = 0; i < n; i ++) {
    //     v[i] = (int *)calloc(m, sizeof(int ));
    //     if(v[i] == NULL) {
    //         fprintf(stderr,"Alocarea liniei a esuat\n");
    //         for(int j = 0; j < i; j++) {
    //             free(v[j]);
    //         }
    //         free(v);
    //         return 1;
    //     }
    // }
    int **v=alloc_matrix(n, m);
    if(v == NULL) {
        free(v);
        fprintf(stderr, "Alocarea a esuat\n");
        return 1;
    }
    read_matrix(n, m, v);
    print_matrix(n, m, v);
    free_matrix(n, v);
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         scanf("%d", &v[i][j]);
    //     }
    // }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         printf("%d ", v[i][j]);
    //     }
    //     printf("\n");
    // }
    // for(int i = 0; i < n; i++) {
    //     free(v[i]);
    // }
    // free(v);
    return 0;
}