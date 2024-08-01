#include<stdio.h>

void prints_divisor(int x)
{
    int i;

    for (i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d\n",i);
        }
    }

}

int main ()
{
    prints_divisor(10);

    return 0;
}
