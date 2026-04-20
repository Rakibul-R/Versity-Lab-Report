#include<stdio.h>

/*Write a  program to covert the temperature in Calsius to Fahrenheit*/

void main(){
  float f,c;
  printf("Enter the temperature in Celsius: ");
  scanf("%f", &c);

  f = (c*9)/5+32;

  printf("\nThe temperature in Fahrenheit is: %0.3f", f);


}
