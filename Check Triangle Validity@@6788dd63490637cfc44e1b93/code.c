#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
    if(x+y>z && x+z>y && z+y>x){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}