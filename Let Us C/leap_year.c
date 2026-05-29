#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year: \n");
    scanf("%d", &year);
    if (year%4 == 0)
    {
        if (year%100 == 0)
        {
            if (year%400 == 0)
            printf("Entered year is a leap year.\n");
            else
            printf("Entered year is not a leap year.\n");
        }
        else
        printf("Entered year is a leap year.\n");
    }
    else
    printf("Entered year is not a leap year.\n");
    return 0;
}