#include<stdio.h>
#include<stdlib.h>
int main (){

int *ptr;
ptr=(int*) calloc(10, sizeof(int));
if(ptr== NULL){

    printf("Your Memory Allocation is not perfect ");
}else {


 printf("Your Memory Allocation is perfect ");
}
return 0;
}
