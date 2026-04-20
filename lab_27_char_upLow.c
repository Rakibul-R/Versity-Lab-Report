#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter your character string(max 99 character): ");
    gets(str);
    
    char uppercase[50],lowercase[50];
    int u=0,l=0;

    for(int i=0;str[i]!='\0';i++){
       if(str[i]>='A'&& str[i]<='Z'){
           uppercase[u++]=str[i];

        } else if(str[i]>='a'&& str[i]<='z'){
            lowercase[l++]=str[i];
         
       }
    }
    uppercase[u]='\0';
    lowercase[l]='\0';

    printf("\nUppercase of the string is : ");
    puts(uppercase);

    printf("\nLowercase of the string is : ");
    puts(lowercase);

    return 0;
}