#include <stdio.h>
int main()
{
    float prin, roi, time, si;
    printf("Enter the principal, rate of interest and time :\n");
    scanf("%f %f %f" ,&prin, &roi, &time);
    si = prin*roi*time/100;
    printf("Simple interest on the given amount is Rs.%.2f\n", si);
    return 0;
}