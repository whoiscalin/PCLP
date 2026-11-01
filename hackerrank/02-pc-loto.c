#include <stdio.h>

#define MAX 100

int main() {
    int freq[50]={0};
    int n;
   
    scanf("%d", &n);
    int v[MAX][6]={0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {
            scanf("%d", &v[i][j]);
            freq[v[i][j]]++;
        }
    }
    int max_aparitii = 0;
    for(int i = 1; i < 50; i++) {
        if(freq[i] > max_aparitii) {
            max_aparitii = freq[i];
        }
    }
    int count = 0;
    for(int k = max_aparitii; k >= 1; k--) {
        for(int i = 1; i < 50; i++) {
            if(freq[i] == k && count <6) {
                printf("%d ", i);
                count++;
            } else if(count >= 6) {
                return 0;
            }
        }
    }
    return 0;
}