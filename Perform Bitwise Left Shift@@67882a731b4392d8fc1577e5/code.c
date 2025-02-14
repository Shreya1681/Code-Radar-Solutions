// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int shift;
    scanf("%d",&shift);
    result= x<<shift,y<<shift;
    printf("%d",result);
    return 0;
}