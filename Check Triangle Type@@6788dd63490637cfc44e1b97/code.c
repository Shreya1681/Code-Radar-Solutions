#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b==c){
        printf("Equilateral");
    }
    if(a+b>c || a+c>b || b+c>a ){
        printf("Scalene");
    }
    else if(a==b || a==c || b==c){
        printf("Isosceles");
    }
    return 0;
}