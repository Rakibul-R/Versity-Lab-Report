#include<stdio.h>

int main(){

    int num, last_digit, rest_of_num;

    printf("Enter a number: ");
    if(scanf("%d", &num) !=1){
        printf("Invalid input! please enter a valid interger number.\n");
        return 0;
    }

    printf("\nYour given number (%d) in reverse order is: \t", num);
    int d=10;

    do{
        last_digit = num % d;
        rest_of_num = num / d;
        printf("%d", last_digit);
        num = rest_of_num;
        
    }while(num > 0);

    printf("\n"); 
    return 0;
}