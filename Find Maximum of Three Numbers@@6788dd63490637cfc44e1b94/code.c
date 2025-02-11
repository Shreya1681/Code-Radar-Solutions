#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
    if(z>y && z>x){
        printf("%d",z);
    }
    else if(x>y && x>z){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }
    return 0;
}