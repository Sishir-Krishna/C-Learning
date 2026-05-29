#include <stdio.h>
#include <stdlib.h>
int main()
{
    int given_year = 2001, year, day=1, lp;
    printf("Enter any year between 1900 and 2100:\n");
    //As the code is not able to check for leap years on the 100 year mark autonomously as I still haven't cracked
    //the logic on why it is failing for 2100, 1900, 2200 and so on.
    scanf("%d", &year);
    if (year>=2001)
    {
        lp = (year-given_year)/3;
        if (lp<=1)
        {
            day = day + (year-2001)*1;
        }
        else
        day = day + (year-2001)*1 + lp*1 - 1;

        if (day%7 == 1)
        printf("1st January of this year is Monday.\n");
        else if (day%7 == 2)
        printf("1st January of this year is Tuesday.\n");
        else if (day%7 == 3)
        printf("1st January of this year is Wednesday.\n");
        else if (day%7 == 4)
        printf("1st January of this year is Thursday.\n");
        else if (day%7 == 5)
        printf("1st January of this year is Friday.\n");
        else if (day%7 == 6)
        printf("1st January of this year is Saturday.\n");
        else if (day%7 == 0)
        printf("1st January of this year is Sunday.\n");
    }
    else
    {
        lp = (given_year-year)/4 +1;
        day = abs(day - (given_year-year)*1 - lp*1);
        if (day%7 == 1)
        printf("1st January of this year is Saturday.\n");
        else if (day%7 == 2)
        printf("1st January of this year is Friday.\n");
        else if (day%7 == 3)
        printf("1st January of this year is Thursday.\n");
        else if (day%7 == 4)
        printf("1st January of this year is Wednesday.\n");
        else if (day%7 == 5)
        printf("1st January of this year is Tuesday.\n");
        else if (day%7 == 6)
        printf("1st January of this year is Monday.\n");
        else if (day%7 == 0)
        printf("1st January of this year is Sunday.\n");
    }
    return 0;
}