#include<stdio.h>
int main(){
    int rad;
    printf("Enter a circle radius: ");
    scanf("%d",&rad);
    float pi=3.1416;
    float area= (float)pi*rad*rad ;
    printf("The circle area is: %f",area);
    return 0;
}