#include <stdio.h>

#define MAX 100

void read_matrix(int n,int m ,int v[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
        }
    }
}

void print_matrix_border(int a[MAX][MAX], int x, int y, int p, int q) {
     
        for(int j = y; j <= q; j++){
            printf("%d ", a[x][j]);
        }
        for(int i = x + 1; i <= p; i++){
            printf("%d ", a[i][q]);
        }
        for(int j = q-1 ; j >= y; j--){
            printf("%d ", a[p][j]);
        }
         for(int i = p - 1; i > x; i--){
            printf("%d ", a[i][y]);
        }
        
       
        
    
}
void print_spiral_recursive(int a[MAX][MAX], int x, int y, int p, int q) {
    if(x > p || y > q) {
        return;
    }
    print_matrix_border(a, x, y, p, q);
    print_spiral_recursive(a, x+1, y+1, p-1, q-1);
}
int main() { 

    int n, v[MAX][MAX];
    scanf("%d", &n);
    read_matrix(n, n, v);
   // print_matrix_border(v, 0, 0, n-1 ,n-1);
   print_spiral_recursive(v, 0, 0, n-1, n-1); 
   return 0;
}