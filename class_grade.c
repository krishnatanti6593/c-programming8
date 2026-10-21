#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&c);
    printf("enter the number");
    scanf("%d",&d);
    float total=a+b+c+d;
    if (total>400){
        printf("A+");
    }
    else if (total>350){
        printf("A");
    }
    else if (total>300){
        printf("B+");
    }
    else if (total>250){
        printf("B");
    }
    else if (total>200){
        printf("C+");
    }
    else if (total>150){
        printf("C");
    }
    else{
        printf("fail");
    }
    return 0;
}