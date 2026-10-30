#include <stdio.h>

#define MAX 100

void swap(int *addr_a,int *addr_b) {
    int temp = *addr_a;
    *addr_a = *addr_b;
    *addr_b = temp;
}

int partition(int v[], int start, int end) {
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

void quickSort(int v[], int start, int end) {
    
    if(end <= start) {
        return;
    }
    int pivot = partition(v, start, end);
    quickSort(v, start, pivot - 1);
    quickSort(v, pivot + 1, end);
}
int binarySearch_Stanga(int v[MAX], int left, int right, int value) {
    int rezultat = -1;
    while(left <= right) {
        int middle = left + (right-left)/2;
        if(v[middle] >= value ) {
            rezultat = middle;
            right = middle - 1;
        }   else {
            left = middle + 1;
        } 
    }
    return rezultat;
}

int binarySearch_dreapta(int v[MAX], int left, int right, int value) {
    int rezultat = -1;
    while(left <= right) {
        int middle = left + (right - left)/ 2;
        if(v[middle] <= value) {
            rezultat = middle;
            left = middle + 1;
        }   else {
            right = middle - 1;
        }
    }
    return rezultat;
}
int main() {
    int n, x, y;
    int v[MAX]={0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    scanf("%d", &y);
    quickSort(v,0, n-1);
    int index_stanga = binarySearch_Stanga(v, 0, n-1, x);
    int index_dreapta = binarySearch_dreapta(v, 0, n-1, y);
    if(index_stanga != -1 && index_dreapta != -1 && index_stanga <= index_dreapta) {
    for(int i = index_stanga; i <= index_dreapta;  i++) {
        printf("%d ", v[i]);
    }
    }   else {
        printf("Nu exista\n");
    }
    return 0;
}