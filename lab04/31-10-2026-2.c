#include <stdio.h>

#define MAX 100

void swap(int *addr_a, int *addr_b) {
    int temp = *addr_a;
    *addr_a = *addr_b;
    *addr_b = temp;
}

void swap_matrix_rows(int n, int m, int a[MAX][MAX], int row_index1, int row_index2) {
    for(int j = 0; j < m; j++) {
        swap(&a[row_index1][j], &a[row_index2][j]);
    }
}
void swap_matrix_cols(int n, int m, int a[MAX][MAX], int col_index1, int col_index2) {
    for(int j = 0; j < n; j++) {
        swap(&a[j][col_index1], &a[j][col_index2]);
    }
}
int main() {
    int n, m, v[MAX][MAX];
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) {
            for(int j =0; j < m; j++) {
                scanf("%d", &v[i][j]);
            }
        }
   // swap_matrix_rows(n, m, v, 1, 3);
   swap_matrix_cols(n, m, v, 2, 4);
    printf("\n---------\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}