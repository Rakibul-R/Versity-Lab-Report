#include<stdio.h>

/*Write a  program to covert the tempereture in Fahrenheit to Calsius*/

void main(){
  float f,c;
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &f);

  c = (f-32)*5/9;

  printf("\nThe temperature in Celsius is: %0.3f", c);


}
