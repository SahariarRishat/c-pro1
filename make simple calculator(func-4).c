#include<stdio.h>

float add(float a, float b)
{


    return a+b;
}
float subtract(float a, float b)
{


    return a-b;
}
float multiply(float a, float b)
{


    return a*b;
}

float divide(float a, float b)
{


    return a/b;
}
int main ()
{

    float a,b;

    printf("Enter your value to calculate :\n");
    scanf("%f%f", &a, &b);
    float add_result =add( a, b);
    float subtract_result =subtract( a, b);
    float multiply_result =multiply( a, b);
    float divide_result =divide( a, b);


    printf("Add Result:%.2f ", add_result );

    printf("subtract_resultt:%.2f ", subtract_result );
    printf("multiply_result:%.2f ", multiply_result );
    printf("divide_result:%.2f ", divide_result );
    return 0;
}
