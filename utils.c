#include <stdio.h>
#include <stdlib.h>

#ifndef NMAX
#define NMAX 100
#endif

#define MAX_VALUE 999999999
#define MIN_VALUE -999999999
int read_array(int v[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    return n;
}

void print_array(int n, int v[]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
}

int sum_array(int n, int v[]) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += v[i];
    }
    return sum;
}
int min_array(int n, int v[]) {
    int min = MAX_VALUE;
    for(int i = 0; i < n; i++) {
        if(v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int posmax_array(int n, int v[]) {
    int max = MIN_VALUE;
    int pozmax = 0;
    for(int i = 0 ; i < n; i++) {
        if(max  < v[i]) {
            max = v[i];
            pozmax = i;
        }
    }
    return pozmax;
}

double avg_array(int n, int v[]) {
    return (double)sum_array(n,v) / (double)n;
}

int find_array(int n, int v[], int x) {
    int poz = -1;
    for(int i = 0; i < n; i++) {
        if(v[i] == x) {
            poz = i;
            break;
        }
    }
    return poz;

}
void sort_array(int v[], int n) {
    for(int i = 0; i < n; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(v[j] < v[min_index]) {
                min_index = j;
            }
        }
        int a = v[i];
        int b = v[min_index];
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        v[i]=a;
        v[min_index]=b;
        
    }
   
}
void multiply_matrix(int n, int m, int p, int a[NMAX][NMAX], int b[NMAX][NMAX], int c[NMAX][NMAX]) {
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < p; j++) {
            int sum = 0;
            for(int k = 0; k < m; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;

        }

    }
}

void power_matrix(int n, int a[NMAX][NMAX], int k, int b[NMAX][NMAX]) {
    int res[NMAX][NMAX];
    int baza[NMAX][NMAX];
    int temp[NMAX][NMAX];

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            res[i][j] = ( i == j) ? 1 : 0;
            baza[i][j] = a[i][j];
        }
    }
    while(k > 0) {
        if( k % 2) {
            multiply_matrix(n, n, n, res, baza, temp);
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    res[i][j] = temp[i][j];
                }
            }
        }
        if(k > 1) {
            multiply_matrix(n, n, n, baza, baza, temp);
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    baza[i][j] = temp[i][j];
                }
            }
        }
        k /= 2;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = res[i][j];
        }
    }
}