#include<stdio.h>
// maximun-or-minimum-twonumbers
void main(){
int a,b;

printf("Enter your first number: ");
scanf("%d",&a);
printf("Enter your second number: ");
scanf("%d",&b);

if(a>b){
    printf("'%d' is greater than '%d'.", a,b);
} else{
     printf("'%d' is greater than '%d'.", b,a);
}
}