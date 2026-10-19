#include <stdio.h>
#define MAX_SIZE 100

int sumOfSquares(int *nums, int numsSize){
    int sum = 0;
    for(int i = 1; i <= numsSize; i++)
    {
        if(numsSize % i == 0){
            int square = nums[i] * nums[i];
            sum += square;
        }
    }
    return sum;
}

int main() {
    int numsSize;

    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i = 1; i <= numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("%d", sumOfSquares(nums, numsSize));
    return 0;

}