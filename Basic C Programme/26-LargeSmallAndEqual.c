#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("The %d number is large.",num1);
        printf("The %d number is small.\n",num2);
    }
    else if(num1<num2){
        printf("The %d number is large.\n",num2);
        printf("The %d number is small.\n",num1);
    }
    else{
        printf("The number is equal.");
    }
    return 0;
}