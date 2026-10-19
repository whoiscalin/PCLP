#include <stdio.h>

int main() {
    int A, B, ctd = 0, d = 1;
    scanf("%d %d", &A, &B);
    int x = A;
    inc:
        if(x>B) {
            return 0;
        }
        ctd=0;
        x++;
        d = 1;
        goto test_div;

    div_inc:
        d++;
        if(d > x) 
            goto inc;
        goto test_div;
    test_div:{ 
        if(x % d == 0)ctd++;
        if(d==x && ctd ==2 && x <= B) {
            printf("%d\n", x);
        }
        
        goto div_inc;
        
    }
    return 0;
}