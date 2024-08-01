#include<stdio.h>
int main (){

    int  i, sum=0;

    for (i=30;i<=120;i++){

        if (i%3 && i%5){

            sum=sum+i;


        }

    }
    printf ("value of summition :%d\n",sum);

return 0;
}

