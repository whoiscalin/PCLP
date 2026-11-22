#include <stdio.h>
#include <stdlib.h>

int prim(int x) {
    if( x < 2) return 0;
    if(x > 2 && x % 2 == 0) return 0;
    if(x == 2) return 1;
    for(int i = 3; i * i <= x;i+=2 ) {
        if(x % i == 0) {
            return 0;
        }
    } 
    return 1;
}

int main() {
    int n ;
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int)); 
    if(v == NULL) {
        free(v);
        return 1;
    }
    int *w = NULL;
    
    int capacity = 0;
    for(int i = 0; i < n ; i++) {
        scanf("%d", &v[i]);
        if(prim(v[i]) == 1) {
            capacity++;
            int *tmp = realloc(w, capacity * sizeof(int));
            if(tmp != NULL) {
                w = tmp;
            } else {
                free(w);
                free(v);
                return 1;
            }
            w[capacity - 1] = v[i];
                
        }
    }
     
    
    printf("\n------------\n");
    // if(capacity < n) {
    //     int *tmp = realloc(w, capacity * sizeof(int));
    //     if(tmp != NULL) {
           
    //         w = tmp;
    //     }   else {
    //         free(w);
    //         return 1; 
    //     }
        
    // }
    for(int i = 0; i < capacity; i++) {
        printf("%d ", *(w + i));
    }
    printf("\n");
    free(w); 
    free(v);
}