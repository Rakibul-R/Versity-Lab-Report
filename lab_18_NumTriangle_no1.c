#include <stdio.h>

int main() {
   int num, t;

    printf("Enter a number for triangle: ");
    if(scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with an error code
    }

    printf("\nThe Number triangle:\n");
    t = num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=t;j++){
            printf("%d ",j);
        }
        printf("\n");
        t=num-i;
    }
 
    return 0;
}