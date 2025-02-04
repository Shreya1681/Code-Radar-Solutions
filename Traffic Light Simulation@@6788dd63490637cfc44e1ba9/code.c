#include <stdio.h>
in main(){
    char R,G,Y;
    scanf("%c",&R);
    scanf("%c",&G);
    scanf("%c",&Y);
    if(R){
        printf("Stop");
    }
    if(G){
        printf("Go");
    }
    else{
        printf("Y");
    }
    return 0;
}