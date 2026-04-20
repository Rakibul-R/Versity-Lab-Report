#include<stdio.h>
// check odd or even
void main(){
int N;
printf("Enter a natural number: ");
scanf("%d",&N);
if(N%2==0){
    printf("'%d' is an even number.", N);
} else{
     printf("'%d' is an odd number.", N);
}
}