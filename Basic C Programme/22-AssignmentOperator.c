#include<stdio.h>
int main(){
    // Assignment Operator are
    // = , +=, -=, *=, /=, %=
    float x,y,z;
    int p;
    printf("Enter four number: ");
    scanf("%f %f %f %d",&x,&y,&z,&p);
    x+=2;
    y*=2;
    z/=3;
    p%=2;
    printf("The result : \nx=%f \ny=%f \nz=%f \np=%d\n",x,y,z,p);
    return 0;
}