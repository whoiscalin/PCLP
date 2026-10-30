#include <stdio.h>

#define MAX 100

void swap(int *addr_a, int *addr_b) {
    int aux;
    aux = *addr_a;
    *addr_a = *addr_b;
    *addr_b = aux;
}
int partition(int v[MAX], int start, int end) {
    int pivot = v[end];
    int i = start - 1;
    for(int j = start; j <= end-1; j++) {
        if(v[j] < pivot) {
            i++;
            swap(&v[i], &v[j]);
        }
    }
    i++;
    swap(&v[i], &v[end]);
    return i;
}
void quickSort(int v[MAX], int start, int end) {
    if (end <= start) {
        return;
    }
    int pivot = partition(v, start, end);
    quickSort(v, start, pivot - 1);
    quickSort(v, pivot + 1, end);
}

int diff_array(int n, int v[MAX], int m, int w[MAX], int diff[MAX] );



int main() {

    int v[MAX]={9,5,2,4,2,10};
    int n = 6;
    quickSort(v, 0, n-1);
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    
    return 0;
}