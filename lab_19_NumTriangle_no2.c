#include <stdio.h>
int length_count(int n);
int count = 0;

int main() {
   int num;
   printf("Enter a number to display its digit triangle: ");
    if (scanf("%d", &num) != 1) {
         printf("Invalid input. Please enter an integer.\n");
         return 0;
    }

    count = length_count(num);

    int store_digits1[50];
    int temp = num;

    // Store the digits of the number in an array
    for(int i=0;i<count;i++){
        int last_digit = temp % 10;
        int rest_of_num = temp / 10;
        store_digits1[i] = last_digit;
        temp = rest_of_num;
       if(temp==0){
           break;
       }    
    }
//reverse array store from main arry
int store_digits2[50];
for(int i=0;i<count;i++){

    store_digits2[i]=store_digits1[count-i-1];

}

  //output
  
    for(int j=1;j<=count;j++){
        int t_count = count-j;
        for(int i=0; i<=t_count; i++){
            printf("%d ",store_digits2[i]);
        }
        printf("\n");
    }


    return 0;
}

int length_count(int n) {
    if (n == 0) {
        return count; // base case if n is 0, return the count
    }
    int k = n / 10;
    count++;
    return length_count(k);
}