#include <stdio.h>

int Euclid(int a, int b) {
    if(a>b){

    }
    while(a!=b){
        if(a>b){
            a-=b;
        }
        if(b>a){
            b-=a;
        }
    }
    return b;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", Euclid(a,b));
    return 0;
}
