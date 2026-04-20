#include <stdio.h>
#include<string.h>

int main() {

  char str[200];
  printf("Enter your string: ");
  gets(str);

  char ch[100],dig[100],sp[100];
  int c=0, d=0,s=0,space=0;

  for(int i=0;str[i]!='\0';i++){
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
      ch[c++]=str[i];
    }
    else if(str[i]>='0' && str[i]<='9'){
      dig[d++]=str[i];
    }
    else if(str[i]==' '){
      space++;
    }
   /* else{
      sp[s++]=str[i];
    }*/
  }

  ch[c]='\0';
  dig[d]='\0';
  //sp[s]='\0';

  printf("\n%d of Alphabets: %s\n",c,ch);
  printf("%d of Digits: %s\n",d,dig);
 // printf("%d of Special characters: %s\n",s,sp);
  printf("Spaces are in the string: %d\n",space);

    return 0;
}