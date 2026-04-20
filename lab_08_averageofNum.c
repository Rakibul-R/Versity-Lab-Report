#include<stdio.h>

int main()
{
    int N;
    printf("How many numbers do you want to average: ");
    scanf("%d", &N);

    float all_numbers[N], sum = 0.0, average;

    printf("\n'Press Enter after each number.'\n");
    printf("\nPut your all %d numbers:\n", N);
    for(int i = 0; i < N; i++)
    {
        scanf("%f", &all_numbers[i]);
        sum += all_numbers[i];
    }
    average = sum / N;
    printf("\n The average is: %0.2f", average);
    return 0;
}