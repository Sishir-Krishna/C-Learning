#include <stdio.h>
int prime_or_not(int);
int main()
{
    int num;
    printf("Enter a positive integer: \n");
    scanf("%d", &num);
    printf("The prime factors of %d are: \n", num);
    for (int i=2;i<num;i++)
    {
        if (num%i == 0)
        // Implies that i is a factor of the number. Now we have to check if i is prime or not.
        {
            int result = prime_or_not (i);
            if (result != 0)
            printf("%d,", result);
        }
    }
    int result = prime_or_not (num); 
    // We write this logic for the case when the number itself is prime. 
    // In that case, the number itself is a prime factor of itself.
    if (result != 0)
    printf("%d \n", result);
    return 0;
}
int prime_or_not(int x)
{
    int j=2;
    if (x == 2)
    return (x);
    else
    {
        for (j=2;j<x;j++)
        {
            if (x%j != 0)
            {
                continue ;
            }
            else
            break;
        }
        if (j==x)
        return (x);
        else
        return 0;
    }
}