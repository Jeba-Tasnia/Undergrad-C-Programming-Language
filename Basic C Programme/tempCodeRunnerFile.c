#include<stdio.h>
int main(){
    int mark;
    printf("The mark up to 100\n");
    printf("Enter a subject mark: ");
    scanf("%d",&mark);
    if (mark>=80){
        printf("A+");
    }
    else if(mark>=75){
        printf("A");
    }
    else if (mark>=70){
        printf("A-");
    }
    else if (mark>=65){
        printf("B+");
    }
    else if (mark>=60){
        printf("B");
    }
    else if (mark>=55){
        printf("B-");
    }
    else if (mark>=50){
        printf("C+");
    }
    else if (mark>=45){
        printf("C");
    }
    else if (mark>=40){
        printf("D");
    }
    else{
        printf("Fail");
    }
    return 0;
}