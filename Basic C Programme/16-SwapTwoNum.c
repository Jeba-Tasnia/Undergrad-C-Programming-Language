#include<stdio.h>
int main(){
    int temp,a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The number are a=%d b=%d",a,b);
    return 0;
}