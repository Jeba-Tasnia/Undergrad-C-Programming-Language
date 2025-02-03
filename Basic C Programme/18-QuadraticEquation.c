#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,D,x1,x2;
    printf("Enter the value of a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    D=sqrt((b*b)-4*a*c);
    x1=(-b+D)/(2*a);
    x2=(-b-D)/(2*b);
    printf("The two root are x1=%lf x2=%lf",x1,x2);
    return 0;
}