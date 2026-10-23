#include <stdio.h>

int fib(int n) {
    if( n == 0 || n == 1) {
        return n;
    }
    int previous = 0;
    int current = 1;
    for(int i = 2; i <= n; i++) {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;

}

int main() {
    printf("%d", (fib(3)));
    return 0;
}