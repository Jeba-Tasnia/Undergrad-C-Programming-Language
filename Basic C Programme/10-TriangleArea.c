#include<stdio.h>
int main(){
    float base,height;
    printf("Enter the triangle base and height: ");
    scanf("%f %f",&base,&height);
    float area=0.5*base*height;
    printf("The triangle area is: %f",area);
    return 0;
}