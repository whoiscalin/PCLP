#include <stdio.h>
#include <math.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);
    printf("The integer entered is: %d\n",number);
   float float1, float2, float3;
   printf("Enter three floating point numbers: ");
   scanf("%f %f %f", &float1, &float2, &float3);
   // Precizie de 2 zecimale
   printf("Precizie de 2 zecimale: %.2f %.2f %.2f\n", float1, float2, float3);
   // Precizie de 6 zecimale
    printf("Precizie de 6 zecimale: %.6f %.6f %.6f\n", float1, float2, float3);
    return 0;
}