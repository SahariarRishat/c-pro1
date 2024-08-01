#include<stdio.h>
int main (){
    int n,i;
    while (1){

        printf("\nENTER THE VALUE OF [n=-1] no output\n ");
        scanf("%d",&n);

        if(n==-1)
            break;

        if(n>-32){

            for (i=n;i>=-32;i--)
            printf("%d\n",i);
        }else{

        for (i=n;i<=-32;i++)
              printf("%d\n",i);

        }



    }

      printf("Not Exist Your VALUE!\nENTER RIGHT ONE:");


return 0;
}
