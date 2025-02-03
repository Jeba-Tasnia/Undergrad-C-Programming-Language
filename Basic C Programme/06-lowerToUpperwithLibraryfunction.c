#include<stdio.h>
int main(){
    char lower;
    printf("Enter any lower character: ");
    scanf("%c",&lower);
    char upper =toupper(lower);
    printf("The upper character is : %c",upper);
    char upper;
    printf("Enter any upper character: ");
    scanf("%c",&upper);
    char lower=tolower(upper);
    printf("The character is : %c",lower);
    return 0;

}