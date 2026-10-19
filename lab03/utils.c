#include <stdio.h>
#include <limits.h>

#include "utils.h"

 long long power_iterative(int n, int k) {
    long long P = 1;
    for(int i = 1; i <= k; i++) {
        P *= n;
    }
    return P;
}

 long long power_recursive(int n, int k) {
    if( k == 0){
        return 1;
    }
    return n * power_recursive(n, k-1);
}

 long long power(int n, int k) {
    if( k == 0) {
        return 1;
    }
    if( k & 1) {
        return n * power(n, k - 1);
    }
    return power(n, k/2) * power(n, k/2);
}

int count_digits(int n) {
    if( n <= 9 && n >= -9) {
        return 1;
    }
    return 1 + count_digits( n/10 );
}

long long reverse1(int n) {
    
    if(count_digits(n)== 1) {
        return n;
    }
    return (long long)(power(10,count_digits(n)-1)* (n%10) + reverse1(n/10));
}
int reverse(int n) {
    long long result = reverse1(n);
    if(result > INT_MAX  || result < INT_MIN) {
        return 0;
    }
    return (int)result;
    
    
}
int is_palindrome(int n) {
    if(reverse(n) == n) {
        return 1;
    }
    return 0;
}

int next_palindrome(int n) {
    int ok = 0;
    int copie_n = n;
    while(ok == 0) {
        if(is_palindrome(copie_n)) {
            ok = 1;
            return copie_n;
        }
        copie_n++;
    }
}

int is_prime(int n) {
    if(n <= 1) {
        return 0;
    }
    if(n == 2 ) {
        return 1;
    }
    if(n % 2 == 0) {
        return 0;
    }
    for(int d = 3; d <= n/d; d+=2) {
        if(n % d == 0) {
            return 0;
        }
    }
    return 1;
}