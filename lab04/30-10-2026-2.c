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

int binarySearch(int v[MAX], int left, int right, int value) {
    while(left <= right) {
        int middle =  left + (right - left)/2;
        if(v[middle] == value) {
            return 1;
        } else if(v[middle] > value) {
            return binarySearch(v, left, middle-1, value);
        } else {
            return binarySearch(v, middle+1, right, value );
        }
    }
    return 0;
}

int diff_array(int n, int v[MAX], int m, int w[MAX], int diff[MAX] ) {
    int k = 0, count = 0;
    for(int i = 0; i < n; i++) {
        if(binarySearch(w, 0, m, v[i]) == 0) {
            diff[k++] = v[i];
            count++;
        }
    }
    return count;
}

void print_array(int n, int v[MAX]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {

    int n, m, a[MAX], b[MAX], diff[MAX]={0};
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    quickSort(a, 0, n-1);
    quickSort(b, 0, m-1);
    int d = diff_array(n, a, m, b, diff);
    print_array(d, diff);
     d = diff_array(m, b, n, a, diff);
    print_array(d, diff);
    return 0;
}