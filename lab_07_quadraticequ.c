#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c;
    printf("Enter your equational three constant value's : ");
    scanf("%f %f %f", &a,&b,&c);

    float D,x1,x2,R_P,I_P;
    D = b*b-4*a*c;

    if (D>0)
    {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);

        printf("\nYour variable 1st value is '%.2f'.\n", x1);
        printf("Your variable 2nd value is '%.2f'.\n", x2);
    } else if (D==0)
    {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);

        printf("Your variable's value are same '%.2f' = '%.2f'.\n", x1,x2);
    } else if(D<0)
    {
       R_P = -b / (2*a);
       I_P = sqrt(-D) / (2*a);

printf("Your variable 1st value is = '%.2f + %.2fi'.\n", R_P, I_P);
printf("Your variable 2nd value is = '%.2f - %.2fi'.\n", R_P, I_P);
    }
    

    return 0;
}