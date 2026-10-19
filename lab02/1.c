#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: \n"); 
    scanf("%d", &n);
    printf("You enterd: %d\n", n);
    printf("Please select a mode, 1 or 2, to check its parity: \n");
    int mode;
    scanf("%d", &mode);
    if(mode >2 || mode <1){
        printf("Invalid mode selected, please select 1 or 2\n");
    }
    else {
        if(mode ==1){
            if(n%2==0){
                printf("The number is even\n");
            }
            else{
                printf("The number is odd\n");
            }
        }
        else if(mode == 2){
            if(n&1){
                printf("The number is odd\n");
            }
            else{
                printf("The number is even\n");
            }
        }
    }
    return 0;
}