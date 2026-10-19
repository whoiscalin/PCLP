#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    for(signed int x = -50; x<=50; x++){
        for(signed int y = -50; y<=50; y++){
            for(signed int z = -50; z <= 50; z++){
                for(signed int k = -50; k <= 50; k++){
                    int j = - x*x*x - y*y*y - z*z*z - k * k * k;
                    int n = (int)cbrt(j);
                    if(n*n*n == j){
                        printf("%d %d %d %d %d\n", x, y, z, k, n);
                    }
                }
            }
            
        }
    }
    return 0;
}