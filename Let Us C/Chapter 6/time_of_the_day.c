#include <stdio.h>
int main()
{
    int hours, minutes;
    for (hours = 1;hours<=11;hours++)
    {
        for (minutes = 00;minutes<=59;minutes++)
        {
            printf("%02d:%02d A.M.  ", hours, minutes);
        }
        minutes = 00;
    }
    while (hours == 12 && minutes == 00)
    {
        printf("%02d:%02d Noon  ", hours, minutes);
        break;
    }
    while (hours == 12)
    {
        for (minutes = 01;minutes<=59;minutes++)
        {
            printf("%02d:%02d P.M.  ", hours, minutes);
        }
        break;
    }
    hours = 1;
    for (hours = 1;hours<=11;hours++)
    {
        for (minutes = 00;minutes<=59;minutes++)
        {
            printf("%02d:%02d P.M.  ", hours, minutes);
        }
        minutes = 00;
    }
    while (hours == 12 && minutes == 00)
    {
        printf("%02d:%02d Midnight  ", hours, minutes);
        break;
    }
    while (hours == 12)
    {
        for (minutes = 01;minutes<=59;minutes++)
        {
            printf("%02d:%02d A.M.  ", hours, minutes);
        }
        break;
    }
    return 0;
}