#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i=2;i<=x-1;i=i+1){
        if(i%x==0);
        a=1;
        break;
    }
    else if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}