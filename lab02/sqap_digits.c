#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {
    int n;
    int cifre_x[MAX_SIZE], cifre_y[MAX_SIZE];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int x, y;
        int j=0, k=0, numar1 = 0, numar2 = 0;
        
        scanf("%d %d", &x, &y);
        if(x<1000 || y < 1000){
            printf("%d %d\n", x, y);
        } else {
            
            int copie_x, copie_y;
            copie_x = x;
            copie_y = y;
            
            while(copie_x) {
                cifre_x[k++] = copie_x%10;
                copie_x /= 10;
                
            }
            while(copie_y) {
                cifre_y[j++] = copie_y % 10;
                copie_y /= 10;
            }
            int auxiliar=0;
           auxiliar  = cifre_x[k-2];
            cifre_x[k-2] = cifre_y[1];
            cifre_y[1]=auxiliar;
            
           auxiliar  = cifre_x[1];
            cifre_x[1] = cifre_y[j-2];
            cifre_y[j-2]=auxiliar;
           
            
            for(int l = k-1; l >= 0; l--) {
               numar1 = numar1 * 10 + cifre_x[l];
               
            }
            for(int l = j-1; l >= 0; l--) {
               numar2 = numar2 * 10 + cifre_y[l];
               
            }
            printf("%d %d\n", numar1, numar2);
            numar1 =0 ;
            numar2 =0;

        }
         
    }
   
    return 0;
}