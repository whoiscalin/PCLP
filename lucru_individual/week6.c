#include <stdio.h>
#include <stdlib.h>

int** genereazaSpirala(int N, int M) {
    int **v = (int **)malloc(N * sizeof(int*));
    for(int i = 0; i < N; i++) {
        v[i]=(int *)malloc(M*sizeof(int));
    }
    int up=0,down = N-1, left = 0, right = M-1;
    int val =1;
    while(up <= down && left <= right) {
        for(int i = left; i <=right; i++){
            v[up][i]=val++;
        }
        up++;
        for(int i = up; i <= down; i++) {
            v[i][right]=val++;
        }
        right--;
        if(up <= down){
            for(int i = right; i >= left; i--) {
                v[down][i]=val++;
            }
            down--;
        }
        if(left <= right) {
            for(int i = down; i >=up; i--) {
                v[i][left]= val++;
            }
            left++;
        }
    }
    return v;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int **v=genereazaSpirala(n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        free(v[i]);
    }
    free(v);
    return 0;
}