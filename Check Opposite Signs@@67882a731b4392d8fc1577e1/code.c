// Your code here...
#include<stdio.h>
int main(){
    int x,y:
    scanf("%d %d",&x,&y);
    bool result=(x>0 && y<0)||(x<0 && y>0);
    if(result){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}