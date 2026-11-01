#include <stdio.h>

#define MAX 100 

int longest_increasing_subarray(int v[MAX], int n) {
    int maximum_length = 0;
    int current_length = 1;
    for(int i = 0; i < n-1; i++) {
        if(v[i] <= v[i+1]) {
            current_length++;
        } else {
            if(v[i] > v[i+1]) {
                if(current_length> maximum_length) {
                    maximum_length = current_length;
                }
                current_length = 1;
                
            }
        }

    }
    if(current_length > maximum_length) {
        maximum_length = current_length;
    }
    return maximum_length;
}

int main() {
    int n, v[MAX];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int Lungime = longest_increasing_subarray(v, n);
    printf("%d", Lungime);
}