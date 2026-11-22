#include <stdio.h>
#include <stdlib.h>

int  **alloc_matrix( int n, int m) {
    int **mat = malloc(n * sizeof(int *));
    if(mat == NULL) {
        free(mat);
        return NULL;
    }
    for(int i = 0; i < n; i++) {
        mat[i]= calloc( m , sizeof(int ));
        if(mat[i] == NULL) {
            for(int j = 0; j < i; j++) {
                free(mat[j]);
            }
            free(mat);
            return NULL;
        }
    }
    return mat;
}
void free_matrix(int **mat, int n) {
    for(int i = 0; i < n ; i ++) {
        free(mat[i]);
    }
    free(mat);
}
int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    int **v=alloc_matrix(n, m);
    //alloc_matrix(  n,  m);
    if(v == NULL) {
        free_matrix(v,  n);
        return 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);

        }
    }
    printf("Sume linii: ");
    for(int i = 0; i < n; i++) {
        int s = 0;
        for(int j = 0; j < m; j++) {
            s += v[i][j];
            
        }

        printf("%d ", s);
    }
    printf("\n");
    printf("Sume coloane: ");
    for(int i = 0; i < m; i++) {
        int s = 0;
        for(int j = 0; j < n; j++) {
            s += v[j][i];
            
        }

        printf("%d ", s);
    }
    free_matrix(v, n);
}