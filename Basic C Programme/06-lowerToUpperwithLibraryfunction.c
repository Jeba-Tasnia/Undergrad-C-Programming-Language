#include<stdio.h>
int main(){
    char lower;
    printf("Enter any lower character: ");
    scanf("%c",&lower);
    char upper =toupper(lower);
    printf("The upper character is : %c",upper);

}