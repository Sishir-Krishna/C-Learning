#include <stdio.h>
#include <math.h>
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
    return pow(base,exponent);
}