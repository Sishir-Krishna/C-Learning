#include <stdio.h>
int romanise(int year, int multiple, char c);
// Romanise function returns an integer.
// So let use make it return the remainder of the term (year/multiple). Multiple stands for
// 1000 in english is M in Roman, 500 in english is D in roman, 100 in english is C in roman
// 50 in english is L in roman, 10 in english is X in roman, 5 in english is V in roman,
// 1 in english is | in roman.
// So we want the function to print the character specified in the argument as many times as
// there is a mutiple in year. Eg: 1200 = 1200/1000 =1 = print M only once and
// remainder is returned. It is also an integer.
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);
    printf("The Roman Equivalent year of %d is : ",year);
    year = romanise (year,1000,'M');
    year = romanise (year, 500,'D');
    year = romanise (year, 100, 'C');
    year = romanise (year, 50, 'L');
    year = romanise (year, 10, 'X');
    year = romanise (year, 5, 'C');
    year = romanise (year, 1, '|');
}
int romanise(int year, int multiple, char c)
{
    //We write it like this because,
    //int roman_1000 = year/1000;
    //int roman_500 = (year%1000)/500;
    //int roman_100 = ((year%1000)%500)/100;
    //int roman_50 = (((year%1000)%500)%100)/50;
    //int roman_10 = ((((year%1000)%500)%100)%50)/10;
    //int roman_5 = (((((year%1000)%500)%100)%50)%10)/5;
    //int roman_1 = ((((((year%1000)%500)%100)%50)%10)%5);
    int j = year/multiple;
    int remainder = year - multiple*j;
    for(int i=1;i<=year/multiple;i++)
    {
        printf("%c",c);
    }
    return (remainder);
}