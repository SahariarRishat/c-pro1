#include <stdio.h>
int main (){
    char strp[]= "abc";
    int i=0;
    while (1){

        printf("%d - %c \n", i, strp[i]);

        if(strp[i]=='\0'){

            break;

        }
        i++;
    }


return 0;
}
