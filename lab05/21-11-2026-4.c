#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *string) {
    int ct = 0;
    while(*string != '\0'){
        ct++;
        string++;
    }
    return ct;
}

int my_strcmp(char *s1, char *s2) {
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    int q;
    if( size1 < size2) {
        q = size2;
    }   else q = size1; 
    int diff1 = 0;
    int diff2 = 0;
    for(int i = 0; i < q; i++) {
        {
            if(*(s1+i) > *(s2+i)) {
                diff1++;
            }
                if(*(s2+i) > *(s1+i)) {
                diff2++;
            }
            if(diff1) {
                return 1;
            }
            if(diff2) {
                return -1;
            }
        }
    }
    return 0;
}
int my_strncmp(char *s1, char *s2, int n) {
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    if(size1 < n || size2 < n) {
        fprintf(stderr, "n prea mare\n");
        return 255;
    }

    int diff1 = 0;
    int diff2 = 0;
    for(int i = 0; i < n; i++) {
        {
            if(*(s1+i) > *(s2+i)) {
                diff1++;
            }
                if(*(s2+i) > *(s1+i)) {
                diff2++;
            }
            if(diff1) {
                return 1;
            }
            if(diff2) {
                return -1;
            }
        }
    }
    return 0;
}
int main() {
    
    
    char *str1 = "Alexzndru";
    char *str2 = "Alexandra";
    int answ = my_strncmp(str1, str2, 3);
    printf("%d\n ", answ);
    return 0;

}