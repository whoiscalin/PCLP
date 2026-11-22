#include <stdio.h>
#include <stdlib.h>


int *buildArray(int *nums, int numsSize, int *returnSize){
    int *new = malloc(numsSize * sizeof(int));
     if(new == NULL) {
            free(new);
           // free(nums);
            return NULL;
        }
    *returnSize = 0;
    
    for(int i = 0; i < numsSize; i++) {
        (*returnSize)++;
        new[*returnSize-1] = nums[nums[i]];
    
     
    }
    
    return new;
}
int main() {
    int n;
    scanf("%d", &n );
    int *v = malloc(n * sizeof(int));
    if(v == NULL) {
        free(v);
        return 1;

    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int m;
    int *ans = buildArray(v, n, &m);
    for(int i = 0; i < m; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    free(v);
    free(ans);
    return 0;
}