#include <stdio.h>

int gcd1(int a, int b) {
    while(a != b) {
        if(a >= b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

int gcd2(int a, int b) {
   
    
    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;

}

/*
    a = 20
    b = 12
    r = 8
    a = 8
    r = 4
    a = 4

*/
int cmmmc(int a, int b) {
    return ( a * b ) / gcd2(a, b);
}

int main() {

    printf("%d\n", gcd1(123124544, 2312424));
    printf("%d\n", gcd2(123124544, 2312424));
    printf("%d\n", cmmmc(12, 8));
    return 0;
}