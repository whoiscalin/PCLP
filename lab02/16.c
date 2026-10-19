#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        double r,x,y;
        scanf("%lf %lf", &x, &y);
        if( x != 0 || y !=0) {
            r = sqrt(x*x + y * y);
        
        }
        double val_sin = y / r;
        double val_cos = x / r;
        if((int)val_sin == val_sin) {
            printf("%d ", (int)val_sin);
        } else {
            printf("%.1f ", val_sin);
        }
        if((int)val_cos == val_cos) {
            printf("%d ", (int)val_cos);
        } else {
            printf("%.1f ", val_cos);
        }
        if ( x == 0) {
            printf("inf ");

        } else if( x != 0 && (int)(y/x)==(y/x)) {
             
                printf("%d ", (int)(y/x));
            } else {
            printf("%.1f ", (y/x));
        }
        if ( y == 0) {
            printf("inf\n");

        } else if( y != 0 && (int)(x/y)==(x/y))  {
            
                printf("%d\n", (int)(x/y));
            } else {
            printf("%.1f\n", x/y);
        }
           
    }
    return 0;
}