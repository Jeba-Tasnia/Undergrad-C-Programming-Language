#include<stdio.h>
int main(){
    //lower character to upper character without using library function
    /*char ch;
    printf("Enter any lower case character: ");
    scanf("%c",&ch);
    printf("The character is : %c",ch-32); */
    char ch;
    printf("Enter any Upper case character: ");
    scanf("%c",&ch);
    printf("The character is : %c",ch+32);
    return 0;
}