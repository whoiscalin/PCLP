#include <stdio.h>
#include <limits.h>

#define MAX 100

int find_array(int n, int v[MAX],int val) {
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(v[mid] == val) {
            return mid;
        } else if(v[mid] > val ) {
            high = mid - 1;
        }  else {
         low = mid + 1;
        }
    }
    return -1;
}
int main() {
    int v[MAX], n;
    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);

    }
    int pos = find_array(n, v, 10);
    int pos1 = find_array(n, v, 2);
    printf("%d\n%d", pos, pos1);
    return 0;
}