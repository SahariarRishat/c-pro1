#include<stdio.h>
int main (){
    int a[5],b[5],ab[5];
    int i;
    printf("Enter the value of A:\n");
    for (i=0;i<5;i++){
        scanf("%d/n",&a[i]);


    }
    printf("Enter the value of B:\n");
    for (i=0;i<5;i++){
        scanf("%d/n",&b[i]);


    }
       for (i=0;i<5;i++){
       ab[i] = a[i]+b[i];

    }

    printf(" value of ab array:\n");
    for (i=0;i<5;i++){

        printf("%d\n",ab[i]);

    }



return 0;
}
