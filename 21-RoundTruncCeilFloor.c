#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter any Floating point number: ");
    scanf("%lf",&x);
    double a=round(x);
    double b=trunc(x);
    double c=ceil(x);
    double d=floor(x);
    printf("Round number: %lf\n",a);
    printf("Trunc number: %lf\n",b);
    printf("Celing number: %lf\n",c);
    printf("Floor number: %lf",d);
    return 0;
}