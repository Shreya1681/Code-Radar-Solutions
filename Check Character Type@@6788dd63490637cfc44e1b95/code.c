#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a': case 'e': case'i': case'o':case'u':
        case 'A': case'E':case'I':case'O':case'U':
        printf("Vowel\n");
        break;
        case '0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
        printf("Digit\n");
        break;
        default:
        if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
            printf("Consonant\n");
        }
        else
            printf("Special Character");
            break;
        return 0;
    }
}