#include<stdio.h>

int main(){

    int range, i=1, sum=0;

    printf("Enter the range (positive integer): ");
    scanf("%d", &range);

    for(i; i<=range; i++){
        sum = sum + i;
    }
    printf("\nSum of first %d natural numbers is: %d\n", range, sum);

    return 0;
}