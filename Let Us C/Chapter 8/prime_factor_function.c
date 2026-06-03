#include <stdio.h>
char prime_or_not(int);
int main()
{
    int num,factor;
    printf("Enter a positive integer: \n");
    scanf("%d", &num);
    for (int i=2;i<num;i++)
    {
        if (num%i == 0)
        // Implies that i is a factor of the number. Now we have to check if i is prime or not.
        {
            char result_of_prime_or_not = prime_or_not (i);
            if (result_of_prime_or_not == 'y')
            {
                printf("The prime factors of %d are: \n", num);
                for (int j=i; (num/j) != i; num = (num/j))
                {
                    printf("%d", i);
                }
            }
            else if (result_of_prime_or_not == 'n')
            continue ;
            // i is a factor, but not a prime factor of the number
            // go for the next i value.
        }
    }
}
char prime_or_not(int x)
{
    int j=2;
    char check;
    for (j=2;j<x;j++)
    {
        if (x%j != 0)
        {
            if (j<(x-1))
            continue;
            else if (j==(x-1))
            {
                check = 'y';
                return check;
            }
        }
        else if (x%j == 0)
        {
            check = 'n';
            return check;
        }
    }
}