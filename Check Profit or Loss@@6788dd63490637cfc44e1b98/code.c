// Your code here...
#include<stdio.h>
int main(){
    int CP,SP;
    scanf("%d %d",&CP,&SP);
    if(SP>CP){
        printf("Profit");
    }
    else if(CP>SP){
        printf("LOSS");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}