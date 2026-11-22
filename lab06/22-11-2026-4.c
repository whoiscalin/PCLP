#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *concat = calloc(2 * numsSize, sizeof(int));
    if(concat == NULL) {
        free(concat);
        return NULL;
    }
    for(int i = 0; i < numsSize; i ++) {
        concat[i] = nums[i];
        concat[numsSize+i] = nums[i];
    }
    *returnSize = 2 * numsSize;
    return concat;
}

int main() {
    int n;
    scanf("%d", &n);
    int *nums = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int m;
    int *v = getConcatenation(nums, n, &m);
    for(int i = 0; i < m; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    free(nums);
    return 0;
}