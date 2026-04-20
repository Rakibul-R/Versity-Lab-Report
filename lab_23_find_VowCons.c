#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[200];
    int vowlCount = 0, consCount = 0;
    char vows[200], conts[200];

    printf("Enter your string (max 199 characters): ");
    fgets(str,200,stdin);

    // Convert to uppercase
    for(int i=0; str[i]!='\0';i++){
        str[i] = toupper(str[i]);
    }

    printf("\nThe string in uppercase is: %s\n", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                vowlCount++;
                vows[vowlCount-1] = str[i];
            }
            else{
                consCount++;
                conts[consCount-1] = str[i];
            }
        }
    }

    printf("\nTotal characters is: %d\n", vowlCount + consCount);
    printf("Vowels in the string is: %d\n", vowlCount);
    printf("Consonants in the string is: %d\n", consCount);
   
    printf("\nVowels: ");
    puts(vows);
    printf("\nConsonants: ");
    puts(conts);
    printf("\n");

    return 0;
}