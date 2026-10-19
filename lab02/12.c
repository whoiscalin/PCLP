#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100000

struct punct{
    double x, y;

}v[MAX_SIZE];




int main(){
    int N;
    struct punct a[MAX_SIZE];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        
        scanf("%lf %lf", &a[i].x, &a[i].y);

    }
    double Aria = 0;
    double Perimetru = 0;
    for(int i = 0; i < N-1; i++){
        Aria=(Aria + (a[i].x * a[i+1].y - a[i+1].x * a[i].y));
        Perimetru += sqrt((a[i].x-a[i+1].x)*(a[i].x-a[i+1].x) + (a[i].y-a[i+1].y)*(a[i].y-a[i+1].y));
    }
    Aria= (Aria + ( a[N-1].x * a[0].y - a[0].x * a[N-1].y));
    Perimetru += sqrt((a[N-1].x-a[0].x)*(a[N-1].x-a[0].x) + (a[N-1].y-a[0].y)*(a[N-1].y-a[0].y));
    
    printf("%.2lf %.2lf\n", fabs(Aria / 2), Perimetru);
    return 0;
}

