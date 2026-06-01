#include <stdio.h>
#include <math.h>
int main()
{
    int pop_today;
    float growth_rate=0.1;
    printf("Enter the population of the town as of today: \n");
    scanf("%d", &pop_today);
    printf("Do you want to check the population of the past or future? (Enter 'p' for past and 'f' for future): \n");
    char choice;
    scanf(" %c", &choice);
    if (choice=='p')
    {
        int years_past;
        printf("How many years in the past do you want to check the population for? \n");
        scanf("%d", &years_past);
        int i;
        for (i=1;i<=years_past;i++)
        {
            pop_today = pop_today/(1+growth_rate);
            printf("The population of the town %d years ago was %d\n", i, pop_today);
        }
    }
    else if (choice == 'f')
    {
        int years_future;
        printf("How mnay years into the future do you want to check the population for? \n");
        scanf("%d", &years_future);
        int i;
        for (i=1;i<=years_future;i++)        
        {
            pop_today = pop_today*(1+growth_rate);
            printf("The population of the town %d years into the future will be %d\n", i, pop_today);
        }
    }
}