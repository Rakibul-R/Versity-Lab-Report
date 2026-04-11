#include <stdio.h>

int main() {
    int n;

    printf("Enter your range (n): ");

    // “If scanf did NOT successfully read 1 integer → do error handling”
    if (scanf("%d", &n) != 1) {
        printf("Invalid input! Please enter a valid integer number.\n");
       return 0;
    }

    // Range validation
    if (n < 2) {
        printf("No prime numbers in this range (%d).\n", n);
        return 0;
    }

    printf("\nPrime numbers up to %d are:\n", n);

    // Prime number logic
    for (int i = 2; i <= n; i++) {
        int prime = 1;

        for (int j = 2; j < i; j++) {  // efficient check
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            printf("%d\t",i);
        }
    }

    printf("\n");
    return 0;
}