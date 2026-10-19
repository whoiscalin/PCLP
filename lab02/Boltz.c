#include <stdio.h>
#include <stdbool.h>
bool contine_cifra(int numar, int cifra) {
    int aux = numar;
    while(aux) {
        int cifra_ = aux % 10;
        aux /= 10;
        if(cifra_ == cifra) {
            return true;
        }
    }
    return false;
}

int main(){
    int n, m, c;
    scanf("%d %d %d", &n, &m, &c);
    for(int i = 1; i <= m; i++) {
         int mod3 = i % n;
        if(i % n == 0 )mod3 = n;
        if( i % c == 0 || contine_cifra(i,c) == true){
            
            printf("P%d - Boltz\n", mod3);
        }
        else {
            printf("P%d - %d \n", mod3, i );
        }
    
    }
    return 0;
}