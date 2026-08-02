#include <stdio.h>
void romanise(int);
int main()
{
    int year;
    printf("Enter any year: \n");
    scanf("%d", &year);
    printf("Roman equivalent of %d is: ", year);
    romanise(year);
    return 0;
}
void romanise (int x)
{
    int millenium, five_centuries, century, five_decades, decade, five_years, year;
    millenium  = x/1000;
    for (int i=1;i<=millenium;i++)
    {
        printf("m");
    }
    five_centuries = (x%1000)/500;
    for (int i=1;i<=five_centuries;i++)
    {
        printf("d");
    }
    century = ((x%1000)%500)/100;
    for (int i=1;i<=century;i++)
    {
        printf("c");
    }
    five_decades = (((x%1000)%500)%100)/50;
    for (int i=1;i<=five_decades;i++)
    {
        printf("l");
    }
    decade = ((((x%1000)%500)%100)%50)/10;
    for (int i=1;i<=decade;i++)
    {
        printf("x");
    }
    five_years = (((((x%1000)%500)%100)%50)%10)/5;
    for (int i=1;i<=five_years;i++)
    {
        printf("v");
    }
    year = (((((x%1000)%500)%100)%50)%10)%5;
    for (int i=1;i<=year;i++)
    {
        printf("i");
    }
    return;
}