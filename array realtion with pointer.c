#include<stdio.h>
int main (){
   int a[]={1,2,3,4,5};

   int *ptr;
   ptr=&a[3];
   printf("Result of Ptr: %d \n", *ptr);
      printf("Result of Ptr: %d \n", *ptr-1);

return 0;
}
