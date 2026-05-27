#include <stdio.h>
int main()
{
    float bs, da, hra, gs;
    printf("Enter the basic salary of the employee :\n");
    scanf("%f", &bs);
    da = 0.4*bs;
    hra = 0.2*bs;
    gs = bs + da +hra;
    printf("The gross salary of the employee is Rs.%.2f\n", gs);
    return 0;
}