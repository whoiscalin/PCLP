#include <stdio.h>
#include <limits.h>

#define MAX 100

void swap(int *addr_a, int *addr_b) {
    int temp = *addr_a;
    *addr_a = *addr_b;
    *addr_b = temp;
}

int partition(int v[], int start, int end) {
    int pivot = v[end];
    int i = start - 1;
    for(int j = start; j < end; j++) {
        if(v[j] < pivot) {
            i++;
            swap(&v[i], &v[j]);
        }
    }
    i++;
    swap(&v[end], &v[i]);
    return i;
}
void quickSort(int v[], int start, int end) {
    if(end <= start) {
        return;
    }
    int pivot = partition(v, start, end);
    quickSort(v, start, pivot - 1);
    quickSort(v, pivot + 1, end);
}
void quickSelect(int v[], int start, int end, int target) {
    if(end <= start) {
        return;
    }
    int pivot = partition(v, start, end);

    if(pivot == target) {
        return;
    }   else if(pivot < target) {
        quickSelect(v, pivot+1, end, target);
    }   else {
        quickSelect(v, start, pivot - 1, target);
    }
}
int main() {
    int v[MAX], n;
    int k;
    int max = INT_MIN;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if(v[i] >= max) {
            max = v[i];
        }
    }
    scanf("%d", &k);
   // quickSort(v, 0, n-1);
 
    // for(int i = n - 1; i > n - 1 - k; i--) {
    //     printf("%d ", v[i]);
    // }
    int target = n-k;
    quickSelect(v, 0, n-1, target);
    for(int i = target; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}