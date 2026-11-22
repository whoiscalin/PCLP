#include <stdio.h>
#include <stdlib.h>


int main() {
    int *v, *tmp;
    int size = 0;
    int capacity = 1;
    v = malloc(capacity * sizeof(int));
    if(v == NULL) {
        free(v);
        return 1;
    }
    int x;
    while(scanf("%d", &x) == 1) {
        if(x == -1) {
            break;
        }
        else {
            if(size == capacity) {
                tmp = realloc(v, ++capacity * sizeof(int));
                if(tmp == NULL) {
                    free(v);
                    return 1;
                }   else {
                     v = tmp;
                }
                 
            }
            v[size++] = x;
        }
        
    
    }
    if( size < capacity) {
            capacity = size;
        tmp = realloc(v, capacity * sizeof(int));
        if(tmp == NULL) {
            free(v);
            return 1;
        }  else {
            v = tmp;
        }
    }
    printf("%d %d\n", size, capacity );
    for(int i = 0; i < size; i++) {
        printf("%d ", v[i]);
        if(i == size - 1) {
            printf("\n");
        }
    }
    
    free(v);
    return 0;
}