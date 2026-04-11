#include<stdio.h>

int main(){

    int n,i=0;
    printf("Enter the nth number of series: ");
    scanf("%d", &n);

    int fib_0=0, fib_1=1, fib_i;
    printf("The series of %dth Fibonacci numbers is: ",n);

    for(i=0;i<=n;i++){ 
        if(i<2){

            fib_i = i;
        }
        else if(i>=2){

        fib_i=fib_0+fib_1;

            fib_0=fib_1;
            fib_1=fib_i;

    }

         printf("%d\t",fib_i);
    }

    return 0;
}