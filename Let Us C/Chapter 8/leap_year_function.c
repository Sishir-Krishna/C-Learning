#include <stdio.h>
void leap_year (int x);
int main()
{
    int year;
    printf("Enter any year: \n");
    scanf("%d", &year);
    leap_year(year);
    return 0;
}
void leap_year (int x)
{
    if (x%4==0 && x%100!=0 || x%400==0)
    {
        printf("%d is a leap year.\n", x);
    }
    else
    {
        printf("%d is not a leap year.\n", x);
    }
}