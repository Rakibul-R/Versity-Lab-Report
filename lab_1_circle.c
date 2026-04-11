#include<stdio.h>
#define pi 3.14

/*Write a  program to find the area and the circumfernec of a circle*/

void main(){
 float r,area, cf;
 printf("Enter your Circle Raudis: ");
 scanf("%f",&r);

// value of pi is 3.14
 area = pi*r*r;
 cf = 2*pi*r;

 printf("\nThe Area of your circle is %.3f ",area);
 printf("\nThe Circumference of your circle is %.3f", cf);

}