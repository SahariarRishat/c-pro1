#include<stdio.h>


int sum(int *a, int size){

int i, sum=0;

for ( i=0; i<size; i++){

    sum= sum+ *(a+i);

}
return sum;
}




int main (){

int arr[3]={50,60,5};

    int result= sum(arr, 3);

    printf("result of sum is :%d \n", result);
return 0;
}
