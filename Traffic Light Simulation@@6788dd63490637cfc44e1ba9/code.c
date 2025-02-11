#include <stdio.h>
in main(){
    char R;
    scanf("%c",&R);
    if(R==R){
        printf("Stop");
    }
    else if(G==R){
        printf("Go");
    }
    else{
        printf("Y");
    }
    return 0;
}