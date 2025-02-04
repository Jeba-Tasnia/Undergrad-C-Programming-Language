#include<stdio.h>
int main(){
    // Even Odd 
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The %d number is even.",num);
    }
    else{
        printf("The %d number is odd.",num);
    }
    return 0;
}