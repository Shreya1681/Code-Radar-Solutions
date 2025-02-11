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
    else if(Y==R){
        printf("Slow Down");
    }
    else{
        printf("Invalid input")
    }
    return 0;
}