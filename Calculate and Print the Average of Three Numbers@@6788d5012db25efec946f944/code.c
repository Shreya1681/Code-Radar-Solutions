#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    float a=(x+y+z)/3.0;
    printf("Average: %.2f",a);
    return 0;
}