#include <stdio.h>

void my_memcpy(void *dst, const void *src, int num) {
    char *d = (char *)dst;
    const char *s = (const char *)src;

    for(int i = 0; i < num; i++) {
        d[i]=s[i];
    }
}
void checkEndiannes() {
    int n = 1;
    char *p = (char *)&n;
    if(*p == 0) {
        printf("Big Endian\n");

    } else {
        printf("Little Endian\n");
    }
}
int main() {
    int a = 123;
    int b;
    my_memcpy(&b, &a, sizeof(a));
    printf("%d\n", b);

    // int src[100]={124156, 223213, 332455};
    // int dst[100];
    // my_memcpy(dst, src, sizeof(src));

    // for(int i = 0; i < 3; i++) {
    //     printf("%d ", dst[i]);
    // }

    int n;
    double src[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &src[i]);
    }
    double dst[100];
    my_memcpy(dst, src, n * sizeof(double));
    for(int i = 0; i < n; i++) {
        printf("%lf ", dst[i]);
    }
    printf("\n");
    checkEndiannes();
    return 0;
}