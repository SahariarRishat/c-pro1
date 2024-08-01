#include<stdio.h>
int main (){
    int i,j;
    for (i=1;i<=5;i++){
         printf ("outer loop strat\n");
        for (j=1;j<=3;j++) {

             printf ("****\n");

        }

         printf ("outer loop end\n");
    }

return 0;
}
