#include <stdio.h>
int prime_or_not(int);
int main()
{
    int num,factor;
    printf("Enter a positive integer: \n");
    scanf("%d", &num);
    printf("The prime factors of %d are: \n", num);
    for (int i=2;i<num;i++)
    {
        if (num%i == 0)
        // Implies that i is a factor of the number. Now we have to check if i is prime or not.
        {
            int result_of_prime_or_not = prime_or_not (i);
            if (result_of_prime_or_not == i)
            {
                for (int j=num; j%i == 0; j= j/i)
                {
                    printf("%d ", i);
                }
            }
            else if (result_of_prime_or_not != i)
            continue ;
            // i is a factor, but not a prime factor of the number
            // go for the next i value.
        }
    }
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