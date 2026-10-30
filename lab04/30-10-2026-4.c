#include <stdlib.h>
#include <stdio.h>
#define MAX 100

void read_matrix(int n, int m, int v[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
        }
    }
}
void print_columns(int n, int v[MAX][MAX], int col) {
    for(int i = 0; i < n; i++) {
        
        printf("%d ", v[i][i+col]);
        if(i > 0) {
            v[i][i+col] = 0;
        }
    }
    printf("\n");
    for(int i = 0; i <= col; i++) {
        
        printf("%d ", v[i][col - i]);
        v[i][col-i] = 0;
    }
    printf("\n-----------\n");
    

}

void print_matrix(int n, int m, int v[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", *(*(v+i)+j));
        }
        printf("\n");
    }
}
int main() {
    int n, m, v[MAX][MAX], col;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &col);
    read_matrix(n, m, v);
    print_columns(n, v, col);
    print_matrix(n,m,v);
    return 0;
    
}