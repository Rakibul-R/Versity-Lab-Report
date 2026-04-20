#include <stdio.h>
int fib(int a);

int main() {

    int n;
    printf("Enter nth number of the fibonacci series: ");
    if(scanf("%d", &n) != 1) {
        printf("Invalid input!!\n");
        return 0;
    }


    printf("\nThe fibonacci series is:");

    for(int i=0;i<=n;i++){
        printf(" %d", fib(i));
    }
    

    return 0;
}

int fib(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }

    int fib_N = fib(a-1)+ fib(a-2);


    return fib_N;

}