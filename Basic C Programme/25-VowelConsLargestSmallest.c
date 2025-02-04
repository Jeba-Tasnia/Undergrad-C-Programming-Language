#include<stdio.h>
int main(){
   /* int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    if (num1>num2){
        printf("The %d is a largest number.",num1);
    }
    else{
        printf("The %d is a smallest number.",num1);
    }*/
   char ch;
   printf("Enter a character: ");
   scanf("%c",&ch);
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    printf("The character is vowel.");
   }
   else{
    printf("The character is consonant");
   }
    return 0;
}