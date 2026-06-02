#include <stdio.h>
char leap_year(int x);
int main()
{
    int year;
    printf("Enter an year: \n");
    scanf("%d", &year);
    char result = leap_year(year);
    if (result == 'y')
    printf("The year %d is a leap year.\n", year);
    else if (result == 'n')
    printf("The year %d is not a leap year.\n", year); 
    return 0;
}
char leap_year(int year)
{
    char check;
    if (year%4 != 0)
    check = 'n';
    else if (year%4 ==0)
    {
        if (year%100 == 0)
        {
            if (year%400 == 0)
            check = 'y';
            else
            check = 'n';
        }
        else
        check = 'y';
    }
    return check;
}