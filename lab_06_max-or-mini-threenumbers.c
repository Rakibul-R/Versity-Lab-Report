#include<stdio.h>
// compare-threenumbers

void main(){
int a,b,c;
int lergest, middle, smallest;

printf("Enter your three number's: ");
scanf("%d %d %d",&a,&b,&c);

if(a==b||b==c||a==c){
    printf("Sorry,There is no middle number.\n");
} else{
        // for lergest number

if(a>b && a>c){
    printf("'%d'is the lergest of the three numbers.\n", a);
} else if(b>a && b>c){
    printf("'%d'is the lergest of the three numbers.\n", b);
} else{
     printf("'%d'is the lergest of the three numbers.\n", c);
}

// for middle number

if(((b>a)&&(c>b))||((a>b)&&(b>c))){
    printf("'%d'is the middle of the three numbers.\n", b);
} else if(((b>a)&&(a>c))||((a>b)&&(c>a))){
    printf("'%d'is the middle of the three numbers.\n", a);
} else{
     printf("'%d'is the middle of the three numbers.\n", c);
}

//  for smallest number

if(a<b && a<c){
    printf("'%d'is the smallest of the three numbers.\n", a);
} else if(b<a && b<c){
    printf("'%d'is the smallest of the three numbers.\n", b);
} else{
     printf("'%d'is the smallest of the three numbers.\n", c);
}

}

}