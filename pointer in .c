#include<stdio.h>
int main (){
   int x=10;

   int *a;
   a=&x;

   printf(" Value of X is: %d\n", *a);

   printf(" Value of X is: %d", x);



return 0;
}
