#include <stdio.h>

int my_strlen(char *s) {
    char *start = s;
  
    while(*s != '\0') {
        
        s++;
    } 
    return s - start;
}

int main() {
    char *s = "Hello World!";
    printf("%d", my_strlen(s));
    return 0;

}