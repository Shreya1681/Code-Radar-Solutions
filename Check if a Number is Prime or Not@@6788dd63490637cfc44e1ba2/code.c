#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0 && x/x==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}