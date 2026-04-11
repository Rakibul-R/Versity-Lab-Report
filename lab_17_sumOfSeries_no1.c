#include <stdio.h>
#include <math.h>

int main() {
    int range;

    float sum=0.0;

    printf("Enter your range for sum: ");
    if(scanf("%d", &range)!=1 || range<=0){
        printf("\nInvalid input. Please enter a positive integer for the range.\n");
        return 0;
    }

    int i =1 ;  // Start from 1 to avoid division by zero
    while(i<=range){
        sum += 1.0/pow(i, 2);
        i++;
    }

    printf("Sum is = %.3f\n", sum);
    return 0;
}