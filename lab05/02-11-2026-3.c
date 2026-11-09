#include <stdio.h>

#define MAX 100
void check_endianness() {
    unsigned int n = 1;
    unsigned char *p = (unsigned char *)&n;
    if( *p == 1) {
        printf("Little Endian");
    } else printf("Big endian");
}
int main() {
    int n, m;
    double v[MAX][MAX];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%lf", &v[i][j]);
        }
    }
double *p = &(*(*(v+2)+3));
printf("%p\n", (void *)p);
v[2][3] = 10;
printf("%p\n", (void *)&v[2][3]);

check_endianness();


}