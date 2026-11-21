#include <stdio.h>
#define NMAX 100
int my_strlen(char *string) {
    int ct = 0;
    while(*string != '\0'){
        ct++;
        string++;
    }
    return ct;
}
int main() {
    char *s = "Hello World!";

    //fgets(s, NMAX, stdin);
    int size = my_strlen(s);
    printf("%d\n", size);
}