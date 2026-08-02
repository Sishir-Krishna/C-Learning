#include <stdio.h>
float power(float base, float exponent);
int main()
{
    float a,b,result;
    printf("Enter the base and exponent: \n");
    scanf("%f %f", &a, &b);
    result = power(a,b);
    printf("%f raised to the power %f is %f\n", a, b, result);
    return 0;
}
float power(float base, float exponent)
{
    float result =1;
    for (int i=1;i<=exponent;i++)
    {
        result = result*base;
    }
    return result;
}