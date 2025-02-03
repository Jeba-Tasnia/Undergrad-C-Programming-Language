#include<stdio.h>
int main(){
    float a,b;
    printf("Enter two diagonal : ");
    scanf("%f %f",&a,&b);
    double area= 0.5*a*b;
    printf("The rhombus area is: %lf",area);
}