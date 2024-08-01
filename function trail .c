#include <stdio.h>

int get_sum(int x ,int y){

int sum= x+y;

return sum;
}


void hello_hi (){


printf("Hiiiiii\n");


printf("kese hua eiye kesa hua\n");
}



int main (){

    hello_hi();
  int result=get_sum(10,20);
    printf("%d \n", result);
 int value=get_sum(100000,1);
 printf("%d \n", value);
return 0;

}
