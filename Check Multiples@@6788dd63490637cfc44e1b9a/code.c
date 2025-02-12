// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if((2*x)==y||(2*y)==x){
        printf("Yes");
    }
    else if(x%y==0 || y%x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}