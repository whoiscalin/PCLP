#include <stdlib.h>

#define NMAX 100

#include "utils.c"

int main() {
    
    int v[NMAX];
    int n = read_array(v);
    print_array(n, v);

    int sum = sum_array(n, v);
    int min = min_array(n, v);
    int posmax = posmax_array(n, v);
    double avg = avg_array(n, v);
    int pos = find_array(n, v, 30) ; // pos == 1 (v[1] == 30)
    int pos1 = find_array(n, v, 4) ;  // pos == 3 (v[3] == 4)
    int pos2 = find_array(n, v, 13) ;
    printf("%d\n %d\n %d\n %.2f\n %d\n %d\n %d\n", sum, min, posmax, avg, pos, pos1, pos2);
    sort_array(v, n);
    print_array(n, v);

    int a[NMAX][NMAX] = {
    { 0,  1,  1,  1},
    { 1,  1,  1,  1},
    { 0, 10,  0,  0},
    { 0, 10,  0,  0}
    };

   /* int b[NMAX][NMAX] = {
    { -1, 10,  1, 0},
    { -2, 20,  2},
    { -3, 30,  3},
    { -4, 40,  4}
    };*/
   
    n = 4;
    int m = 4;
    int b[NMAX][NMAX] =  {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int k = 10;
   // multiply_matrix(n, m, p, a, b, c);
    power_matrix(n, a, k, b);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
     return 0;
}