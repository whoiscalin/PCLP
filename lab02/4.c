#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
int main(){
   /* int n;
    scanf("%d", &n);
    char a[MAX_SIZE];
    for(int i = 0; i < n ; i++)
    {
        a[i] = '*';
    }

    while(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
        n--;
    }*/
   int n;
   scanf("%d", &n);
   char str[MAX_SIZE] = "";
   for(int i = 0; i < n; i++)
   {
    str[i] = '*';
   }
   for(int i = 0; i < n; i++)
    {
        printf("%s\n", str);
        str[strlen(str)-1] = '\0';
    }
    return 0;
}