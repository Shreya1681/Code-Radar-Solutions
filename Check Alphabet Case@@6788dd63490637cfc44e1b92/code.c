#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    if(isupper(x)){
        printf("Uppercase\n");
    }
    else if(islower(x)){
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet\n");
    }
    return 0;
}