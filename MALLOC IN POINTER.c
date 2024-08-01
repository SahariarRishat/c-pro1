#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr;
    ptr=(int*) malloc(5* sizeof(int));

    if(ptr==NULL){

        printf("Your Memory Allocation is not work");
    }else {

      printf("Your memory Allocation is  work");

    }

return 0;
}
