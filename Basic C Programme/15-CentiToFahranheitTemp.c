#include<stdio.h>
int main(){
    float C,F;
    /*printf("Enter the centigrade temparature: ");
    scanf("%f",&C);
    F=((C/5)*9)+32;
    printf("The Fahrenheit temperature is: %f",F);*/
    printf("Enter the Fahranheit temparature: ");
    scanf("%f",&F);
    C=((F-32)/9)*5;
    printf("The Centigrade temperature is: %f",C);
    return 0;
}