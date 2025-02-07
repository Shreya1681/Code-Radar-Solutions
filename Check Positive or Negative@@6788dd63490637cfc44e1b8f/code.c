#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        if(x<0){

            printf("Negative");
        }
        else{
            printf("Positive");
        }
    }
    else(x=0){
        printf("Zero");
    }
    return 0;
}