#include<stdio.h>

int main(){

    int number,fact=1;
    printf("Enter a number: "); //Safe Range for Factorial is 0 to 12
    scanf("%d",&number);

    int i = 1;
    while(i<=number){  
        fact = fact *i;
        i++;
    }
    printf("\nThe factorial of %d is: %d",number,fact);


    return 0;
}