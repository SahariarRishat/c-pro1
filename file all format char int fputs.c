#include<stdio.h>
int main (){
FILE *fp;

fp=fopen("Test_file.txt","w");


int i;

for(i=65;i<91;i++){


    fputc(i, fp);
}

char array[100]="hello i am shahriar ";

fputs(array, fp);

fprintf(fp,"My id is : %d\n", 100);

fclose(fp);

return 0;
}
