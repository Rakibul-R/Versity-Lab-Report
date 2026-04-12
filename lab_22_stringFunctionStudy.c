#include <stdio.h>
#include<string.h>

int main() {

  char first_str[200],second_str[200];

  printf("Enter your 1st String(<<<199 characters):");
  gets(first_str);

  printf("\nEnter your 2nd String(<<<199 characters):");
  gets(second_str);

  //length count & output ==>>1

  int lengthOf_1stString = strlen(first_str);
  int count1=0;
  for(int i=0;i<=lengthOf_1stString;i++){
    if(first_str[i]==' '){
      count1++;
    }
  }

  printf("\nLength of 1st string character is:'%d'\n",lengthOf_1stString-count1);

  int lengthOf_2ndString = strlen(second_str);
  int count2=0;
  for(int i=0;i<=lengthOf_2ndString;i++){
    if(second_str[i]==' '){
      count2++;
    }
  }
  printf("\nLength of 2nd string character is:'%d'\n",lengthOf_2ndString-count2);

  // copy 1st string to 2nd string ==>>2

  char temp_1stString[200];
  strcpy(temp_1stString, first_str); //copy 1st string to temp string

  strcpy(first_str,second_str);
  printf("\nNow your first string character is(1stString copy by 2ndString):");
  puts(first_str);

  //combine 1st and 2nd string==>>3

  strcpy(first_str,temp_1stString); //restore 1st string from temp string

  strcat(first_str,second_str);     //combine 1st and 2nd string and store in 1st string
  printf("\ncombine 1st and 2nd string is: ");
  puts(first_str);


  //compare 1st and 2nd string  ==>>4

  strcpy(first_str,temp_1stString); //restore 1st string from temp string
  printf("\ncompare 1st and 2nd string:\n");
  int compare = strcmp(first_str,second_str);
  if(compare == 0){
    printf("\n'Both string character are same.'\n");
  }
  else{
    printf("\n'Both string character are different.'\n");
  }

  //output all string extra not wirte in lab report

  printf("\nYour 1st character string is:\n");
  puts(first_str);

  printf("\nYour 2nd character string is:\n");
  puts(second_str);

  printf("\nYour temporary character string is:\n");
  puts(temp_1stString);

  return 0;
}
