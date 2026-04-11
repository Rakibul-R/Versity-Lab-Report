#include<stdio.h>

int null_fun(); // This function is not used in the main program, but it demonstrates integer division and modulus operations.

int main(){
int dec_num, division_result, remainder;

int bina_num[100], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);
    do{
        division_result = dec_num / 2;
        remainder = dec_num % 2;
        bina_num[i] = remainder;
        i++;
        dec_num = division_result;

    }while(division_result != 0);

        printf("Binary number: "); 
    for(int j = i - 1; j >= 0; j--){
        printf("%d", bina_num[j]);  
    }
    printf("\n");


    return 0;
}

int null_fun(){

    int a=1;

 printf("Hello, World! %d\n", a/2); // This will print "Hello, World! 0" because integer division of 1 by 2 results in 0.
 printf("Hello, World! %d", a%2); // This will print "Hello, World! 1" because the remainder of 1 divided by 2 is 1.


    return 0;
}

