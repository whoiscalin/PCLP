#include <stdio.h>

#define MAX 100

long long pref[MAX+1][MAX+1];

long long get_sum(int r1, int c1, int r2, int c2) {
    if(r1 > r2 || c1 > c2) {
        return 0;
    }
    return pref[r2+1][c2+1]-pref[r1][c2+1]-pref[r2+1][c1] + pref[r1][c1];
}
void find_special_element(int n, int m, size_t a[MAX][MAX]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            pref[i+1][j+1]= (long long)a[i][j] +pref[i][j+1] + pref[i+1][j]- pref[i][j];

        }
    }
    long long diferenta_minima = -1;
    int x = -1;
    int y = -1;
    for(int i = 1; i < n-1; i++) {
        for(int j = 1; j < m -1; j++) {
            long long sum_a = get_sum(0, 0, i-1, j-1);
            long long sum_b = get_sum(0, j+1, i-1, m-1);
            long long sum_c = get_sum(i+1, 0, n-1, j-1);
            long long sum_d = get_sum(i+1, j+1, n-1, m-1);

            long long suma_maxima = sum_a;
            if(sum_b > suma_maxima) suma_maxima=sum_b;
            if(sum_c > suma_maxima) suma_maxima=sum_c;
            if(sum_d > suma_maxima) suma_maxima=sum_d;


            long long suma_minima = sum_a;

            if(sum_b < suma_minima) suma_minima=sum_b;
            if(sum_c < suma_minima) suma_minima=sum_c;
            if(sum_d < suma_minima) suma_minima=sum_d;

            long long diferenta = suma_maxima - suma_minima;

            if(diferenta_minima == -1 || diferenta < diferenta_minima) {
                diferenta_minima = diferenta;
                x=i;
                y=j;
            }
        }
    }
    if(x == -1 || y == -1) {
        printf("%d %d\n", x, y);
        return;
    }
    printf("%d %d\n", x, y);
}

int main() {
    int n, m;
    size_t v[MAX][MAX];
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) {
            for(int j =0; j < m; j++) {

                scanf("%lu", &v[i][j]);
            }
        }
    find_special_element(n, m, v);
    return 0;
}