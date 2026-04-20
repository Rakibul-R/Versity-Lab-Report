#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter your character string(max 99 character): ");
    fgets(str,100,stdin);
    
     printf("\nYour Given string is : ");
     puts(str);

    int len =strlen(str);
     char rev_str[100];
     for(int i=0;i<len;i++){
         rev_str[len-i-1]=str[i];
     }

     rev_str[len]='\0';
     printf("Reverse of the string is :");
     puts(rev_str);


    return 0;
}