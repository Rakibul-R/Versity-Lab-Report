#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char word[100];
    printf("Enter a word(max 99 characters): ");
    gets(word);

    for(int i =0;word[i]!='\0';i++){
        word[i] = tolower(word[i]);
    }
    char re_word[100];
    int len = strlen(word);

    // Reverse the word
    for(int i = 0; i < len; i++){ 
        re_word[i] = word[len - 1 - i];
    }
    re_word[len] = '\0';

    int compare = strcmp(word, re_word);

      if(compare == 0){
          printf("\n'Both strings are same and it's a palindrome.'\n");
      }
      else{
          printf("\n'Both strings are not same.'\n");
      }

    printf("\nThe word you entered is: ");
    puts(word);

    printf("The reversed word is: ");
    puts(re_word);



    return 0;
}