#include <stdio.h>


int suma_cifrelor(int n) {
    int suma = 0;
    while(n) {
        suma += n % 10;
        n /= 10;
    }
  return suma;   
}
int dibo(int n) {
    if(n <= 1) {
        return n;
    }
    return suma_cifrelor(dibo(n-1)+dibo(n-2));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dibo(n));
    return 0;
}