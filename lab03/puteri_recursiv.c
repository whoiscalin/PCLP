#include <stdio.h>
#include <stdbool.h>

int putere_doi(int n) {
    if(n == 1 ) {
        return true;
    }
    if( n % 2) {
        return false;
    }
    return putere_doi(n/2);

}
int putere_patru(int n) {
    if(n == 1) {
        return true;
    }
    if(n % 4 ) {
        return false;
    }
    return putere_patru(n/4);
}

int main() {
    printf("%d\n", putere_doi(30));
    printf("%d\n", putere_patru(65));
    return 0;
}