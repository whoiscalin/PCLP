#include <stdio.h>

#define MAX 100
void print_diagonals(int n, int a[MAX][MAX]) {
   
    for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < n - i; j++) {
            printf("%d ", a[j][j+i]);
        }
        printf("\n-------\n");
    }
   
    printf("\n---Diagonale Paralele cu Secundara----\n");
     for(int i = n; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%d ", a[j][i - j -1]);
        }
        if(i>0) {
            printf("\n-------\n");
        }
    }
   
}
int main() {
        int n, v[MAX][MAX];
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            for(int j =0; j < n; j++) {
                scanf("%d", &v[i][j]);
            }
        }
        printf("\n---Diagonale Paralele cu Principala----\n");
        print_diagonals(n,v);
}