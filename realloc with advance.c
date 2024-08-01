#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int *ptr1,*ptr2;

    ptr1=(int*)malloc(20*sizeof(int));

    ptr2=(int*)calloc(20, sizeof(int));

    if (ptr1==NULL || ptr2==NULL)
    {


        printf("your memory is not correct.\n");
    }
    else
    {

        printf("your memory is  correct.\n");

        free(ptr1);
        printf("your memory is freed.\n");
        ptr2=realloc(ptr2,30);

        printf("your memory is realloceted successfully.\n");

    }


    return 0;
}
