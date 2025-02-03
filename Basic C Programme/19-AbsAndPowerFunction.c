#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    int a = pow(x,y);
    printf("The value of x power: %d\n",a);
    int b=-34;
    int absulate = abs(b);
    printf("The absulate value is: %d",absulate);
    return 0;
}