#include <stdio.h>
int main()
{
    float ot_pay, total_ot_pay=0.0;
    int time,i=1;
    while (i<=10)
    {
        printf("Enter the number of hours worked by the %d employee: \n",i);
        scanf("%d", &time);
        if (time>40)
        ot_pay = (time-40)*12.0;
        total_ot_pay += ot_pay;
        i++;
    }
    printf("Total overtime pay for the 10 employees is: %.1f\n", total_ot_pay);
    return 0;
}