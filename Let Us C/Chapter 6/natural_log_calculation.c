#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float count,num,factor;
    float term, sum;
    printf("Enter the number you want to find the natural log of: \n");
    scanf("%f", &num);
    sum = (num-1)/num;
    printf("Upto which term do you want the sum to be calculated? \n");
    scanf("%d",&i);
    if(i>=2)
    {
    for (count=2.0;count<=i;count++)
    {
        factor = (num-1)/num;
        term = (1/2)*pow(factor,count);
        sum += term;
    }
    }
    else ;
    printf("The natural log of %f is %f\n", num, sum);
    return 0;
}