#include<stdio.h>

int count_digits(int n);
int count =0;

int main(){
    int num,sum=0;
    int store_num[50];

    printf("Enter a number: ");
    if(scanf("%d",&num)!=1){
        printf("Invalid input. Please enter an integer.\n");
        return 0;
    }

    count = count_digits(num);

    for(int i=0; i<count; i++){

        int last_digit = num % 10;
        int rest_of_num = num / 10;
        store_num[i] = last_digit;

        sum += last_digit;          // add the last digit to the sum

        num = rest_of_num;
        if(num == 0){
            break;              // stop if there are no more digits to process
        }
    }

    printf("\nThe sum of the digits is: ");

    for(int i=count-1; i>=0; i--){ 
        
        if(store_num[i]!=0){
        printf("%d ", store_num[i]); 
        }
        if(i>0){
            if(store_num[i]!=0)
            printf("+ ");
        }
    }

    printf("= %d\n", sum);
  
    return 0;
}

int count_digits(int n){
    if(n==0){
        return count;           // base case if n is 0, return the count
    }
    int k = n/10;
    count++;
    return count_digits(k);
}