#include<stdio.h>
int  main (){
     char str[4]={'a','b', 'c'};


     int i=0;
    while(1){


            printf("%s-%c", i,str[i] ) ;

        if(i=="\0"){

               break;


           }
           i++;
    }



return 0;
}
