#include <stdlib.h>
#include <stdio.h>

#define MAX_VALUE 999999999;
#define MIN_VALUE -999999999;

int main() {
    int n;
    scanf("%d", &n);
    int ma1=MIN_VALUE; 
    int ma2 = MIN_VALUE;

    int mi1=MAX_VALUE; 
    int mi2 = MAX_VALUE;
    int x;

    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if(x > ma1) {
            ma2=ma1;
            ma1=x;
        }
        else if(x > ma2) {
            ma2 = x;
        }
        if(x < mi1) {
            mi2=mi1;
            mi1 = x;
        }
        else if( x < mi2) {
            mi2 = x;
        }
    }
    printf("%d %d %d %d",mi1 , mi2, ma2, ma1);
    return 0;
}