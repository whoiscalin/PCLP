#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define MAX_VALUE 100000
int divizori(int n) {
    int numar_divizori = 0;
    for(int d = 1; d * d < n; d++)
        {
            if(n % d == 0) {
                numar_divizori+=2;
            }
        }
    if((int)sqrt(n) * (int)(sqrt(n))==n){
        return numar_divizori + 1;
    }   
    else {
        return numar_divizori;
    }
    
}

int main() {
    int n, x, k=0;
    scanf("%d", &n);
    int v[MAX_SIZE];
    scanf("%d", &x);
    int ma = divizori(x);
    v[k++] = x;
    for(int i = 2; i <= n; i++){
        scanf("%d", &x);
        if( ma  < divizori(x)) {
            k = 1;
            ma = divizori(x);
            v[k++]= x;
        }
        else if( divizori(x) == ma){
            v[k++]= x;
        }

    }
     int minim = MAX_VALUE;
    if(divizori(v[0]) < ma) {
        
    for(int i = 1; i < k; i++) {
        if(minim > v[i])minim = v[i];
     }
    } 
    else {
        for(int i = 0; i < k ; i++) {
            if(minim > v[i])minim = v[i];
        }
    }
    printf("%d\n", minim);
    return 0;
}