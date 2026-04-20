#include <stdio.h>
#include<string.h>

int main() {

    //input

  char first_string[200],second_string[200];

  printf("Enter your 1st String(<<<199 characters):");
  gets(first_string);

  printf("\nEnter your 2nd String(<<<199 characters):");
  gets(second_string);

  // copy 1st string to 2nd string ==>>2

  char temp_String[200];
  strcpy(temp_String, first_string); //copy 1st string to temp string

  strcpy(first_string,second_string);
  printf("\nAfter copying 2nd string to 1st string :");
  puts(first_string);

  //concatenate 1st and 2nd string==>>3

  strcpy(first_string,temp_String); //restore 1st string from temp string

  strcat(first_string,second_string);     //concatenate 1st and 2nd string and store in 1st string
  printf("\nconcatenate 1st and 2nd string is: ");
  puts(first_string);


    return 0;
}