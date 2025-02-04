#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    if (num1 > num2){
        printf("The %d is a largest number.",num1);
    }
    else{
        printf("The %d is a smallest number.",num2);
    }
    return 0;
}