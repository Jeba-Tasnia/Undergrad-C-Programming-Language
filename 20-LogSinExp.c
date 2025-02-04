#include<stdio.h>
#include<math.h>
int main(){
    double x,r,re,res;
    printf("Enter any number: ");
    scanf("%lf",&x);
    r=log(x);
    re=sin(x);
    res=exp(x);
    printf("Log(%lf)=%lf \n Sin(%lf)=%lf \n Exp(%lf)=%lf",x,r,x,re,x,res);
    return 0;
}