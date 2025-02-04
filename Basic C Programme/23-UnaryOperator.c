#include<stdio.h>
int main(){
    // Unary Operator
    // + , -, ++, --
   /* int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    int result= -x;
   // int value=--result;
    printf("The result is: %d ",result);*/
    int x,y;
    printf("Enter any number: ");
    scanf("%d",&x);
    ++x;
    y=++x + --x;
    printf("%d",y);
    return 0;
}