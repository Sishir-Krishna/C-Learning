#include <stdio.h>
#include <math.h>
int main()
{
    float num,factor,term,sum;
    int sum_upto;
    printf("Enter the number you want to find the natural log of: \n");
    scanf("%f", &num);
    printf("Upto which term do you want the sum to be calculated? \n");
    scanf("%d",&sum_upto);
    sum = (num-1)/num;
    
    if (sum_upto<0) 
    {
        printf("Invalid input. Please enter a non-negative integer for the number of terms.\n");
        scanf("%d", &sum_upto);
    }
    else if (sum_upto==0)
    {
        printf("The natural log of %f is 0\n", num);
    }
    else if (sum_upto==1) 
    {
        sum = (num-1)/num;
        printf("The natural log of %f is %f\n", num, sum);
    }
    else if (sum_upto>=2)
    {
        int i=2;
        for (i=2;i<=sum_upto;i++)
        {
            factor = (num-1)/num;
            term = (1.0/2.0) * pow(factor, i);
            sum += term;
        }
        printf("The natural log of %f is %f\n", num, sum);
    }
    return 0;
}