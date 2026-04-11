#include <stdio.h>

int main() {
    float num;
    int int_part;
    float frac_part;

    printf("Enter a floating point number: ");
    if(scanf("%f", &num)!=1 || num<=0){
        printf("\nInvalid input. Please enter a valid floating point number.\n");
        return 0;
    }


    int_part = (int)num;

    
    frac_part = num - int_part;
    printf("\n");

    printf("Integer part = %d\n", int_part);
    printf("Fractional part = %.3f\n", frac_part);

    return 0;
}