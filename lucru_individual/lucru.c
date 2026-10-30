#include <stdio.h>


void check_endianness() {
    unsigned int n = 1;
    unsigned char *p = (unsigned char *)&n;
    if( *p == 1) {
        printf("Little Endian");
    } else printf("Big endian");
}
int main() {
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    *p1 = 10;
    *p2 = *p1;
    *p3 = 2 * (*p1);
    printf("%d, %d, %d", a, b, c);
    check_endianness();
    return 0;
}