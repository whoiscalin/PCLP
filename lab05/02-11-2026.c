#include <stdio.h>

int main() {
    int *a = 0X00;
    int *b = a;
    //printf("%p\n", &a);
    ++a;
    printf("%p\n", (void *)a);
    printf("%p", (void *)b);

    // La dereferentiere, seg faultul este cauzat de faptul ca adresele 0x00 si 0x04 nu sunt alocate acestui proces.
    printf("Size of void*: %lu", sizeof(void *));
    return 0;
}