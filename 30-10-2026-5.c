#include <stdio.h>
#include <limits.h>
#define MAX 100

void read_matrix(int n,int m ,int v[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &v[i][j]);
        }
    }
}
void print_submatrix(int n, int a[MAX][MAX], int x, int y, int p, int q) {
   
    if(p >= n  || q >= n || p < x || q < y || x < 0 || y < 0) {
        printf("Index out of bounds");
        return;
    } else {
    for(int i = x; i <= p; i++) {
        for(int j=y; j <= q; j++) {
            printf("%d ", a[i][j]);
            }
           printf("\n");
        }
    }   
 }
int sum_of_one_submatrix(int n, int a[MAX][MAX], int x, int y, int p, int q) {
    int sum = 0;
        for(int i = x; i <= p; i++) {
            for(int j=y; j <= q; j++) {
                sum+=a[i][j];
            }
           
        }
        
    return sum;
}
void print_afll_submatrix(int n, int a[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = i; k < n; k++) {
                for(int l = j; l <n; l++) {
                    print_submatrix(n, a, i, j, k, l);
                    printf("-------\n");
                }
            }
            
        }
    }
}
void find_maxsum_submatrix(int n, int a[MAX][MAX]) {    
    int max = INT_MIN;
    int i1,i2,i3,i4;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = i; k < n; k++) {
                for(int l = j; l < n; l++) {
                    if(sum_of_one_submatrix(n, a, i, j, k, l) >= max ) {
                        i1=i;
                        i2=j;
                        i3=k;
                        i4=l;
                        max = sum_of_one_submatrix(n, a, i, j, k ,l);
                    }
                }
            }
        }
    }
    print_submatrix(n, a, i1, i2, i3, i4);
    printf("---\n");
    printf("%d\n", sum_of_one_submatrix(n, a, i1, i2, i3, i4));

}
int main() {
    int v[MAX][MAX], n;
    scanf("%d", &n);
    read_matrix(n, n, v);
   // print_submatrix(n, v, 0, 1, 2, 3);
   // print_afll_submatrix(n, v);
   find_maxsum_submatrix(n, v);
    
}