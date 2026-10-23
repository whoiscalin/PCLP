#include <stdio.h>
#include <stdbool.h>

bool is_Prime(int a) {
    if(a < 2) {
        return false;
    }
    if(a == 2) {
        return true;
    }
    if(a % 2 == 0) {
        return false;
    }

    for(int d = 3; d* d <= a; d+=2) {
        if(a % d == 0) {
            return false;
        }
    }
    return true;
}
int gcd(int a, int b) {
    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void print_closest_prime(int x) {
    int copie_x;
    int ok = 0;
    if(is_Prime(x)) {
        goto final;
    }
    copie_x = x + 1;
    
    int count_greater = 0;
    while(ok == 0) {
        count_greater++;
        if(is_Prime(copie_x)) {
            ok = 1;
            
        }
        copie_x++;
    }
    int count_smaller = 0;
    ok = 0;
    int first_x = x;
    x--;
    while(ok == 0) {
        count_smaller++;
        if(is_Prime(x)) {
            ok = 1;
            
        }
        x--;
    }
    if(count_smaller == count_greater) {
        printf("%d %d\n", first_x - count_smaller, first_x+count_greater);
    }
    else if(count_smaller < count_greater) {
        printf("%d\n", first_x - count_smaller);
    }
    else printf("%d\n", first_x + count_greater);
    final: 

}