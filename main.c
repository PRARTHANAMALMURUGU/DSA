#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,t,remainder,old;
printf("Enter a number:\n");
scanf("%d",&n);
old=n;
while (n>0){
      remainder=n%10;
      t=t*10+remainder;
      n/=10;
    }
    if (t==old){
            printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
        return 0;
    }
