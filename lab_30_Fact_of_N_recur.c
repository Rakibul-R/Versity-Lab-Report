#include <stdio.h>
int factorial(int a);
int fact=1;

int main() {

    int n;
    printf("Enter a number: ");
    if(scanf("%d", &n) != 1) {
        printf("Invalid input!!\n");
        return 0;
    }

    fact = factorial(n);

    printf("\nThe factorial of your number is:'%d'",fact);

    return 0;
}

int factorial(int a){

    if(a==1){
        return 1;  //base case
    }

    fact = a*factorial(a-1);

    return fact;
}