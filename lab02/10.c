#include <stdio.h>
#include <stdlib.h>

int Euclid(int a, int b){
        int r;
        while(b)
        {
            r = a % b;
            a = b;
            b = r;
        }
        return a;

}

int main(){
   
    int previous, current, cmmdc_current, n;
    scanf("%d %d", &n, &previous);
    cmmdc_current = previous;
    for(int i = 1; i<n; i++)
        {
            scanf("%d", &current);
            cmmdc_current = Euclid(cmmdc_current, current);
            if(cmmdc_current == 1){
                printf("Cmmdc este: %d\n", cmmdc_current);
                return 0;
            }
        }
    printf("Cmmdc este: %d\n", cmmdc_current);
    return 0;
}