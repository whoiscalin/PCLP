#include <stdio.h>
#include <stdlib.h>


int main() {
    double x, y;
    int cadran1, cadran2;
    while(scanf("%lf %lf", &x, &y)) {
        if(x == 0 && y == 0){
            return 0;
        }
     if(x > 0 && y > 0) {
        cadran1 = 1;
        printf("%d\n", cadran1);
    }
    if(x < 0 && y > 0) {
         cadran1 = 2;
        printf("%d\n", cadran1);
    }
    if(x < 0 && y < 0) {
         cadran1 = 3;
        printf("%d\n", cadran1);
    }
    if(x > 0 && y < 0) {
         cadran1 = 4;
        printf("%d\n", cadran1);
    }
    if( x == 0) {
        if(y > 0){
            cadran1 = 1;
            cadran2 = 2;
            printf("%d %d\n", cadran1, cadran2 );
        }
        if(y < 0){
            cadran1 = 3;
            cadran2 = 4;
            printf("%d %d\n", cadran1, cadran2 );
        }
    }
    if ( y == 0){
        if(x > 0){
            cadran1 = 1;
            cadran2 = 4;
            printf("%d %d\n", cadran1, cadran2 );
        }
        if(x < 0){
            cadran1 = 2;
            cadran2 = 3;
            printf("%d %d\n", cadran1, cadran2 );
        }
    }
}
    return 0;
}