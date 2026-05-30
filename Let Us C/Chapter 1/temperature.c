#include <stdio.h>
int main()
{
    float t_c, t_f;
    printf("Enter the temperatuere in Celsius \n");
    scanf("%f", &t_c);
    t_f = (t_c*9)/5 + 32;
    printf("The tempreature in Fahrenheit is %f\n", t_f);
    return 0;  
}