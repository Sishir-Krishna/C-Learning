#include <stdio.h>
void prime_factors (int x);
int main()
{
    int number;
    printf("Enter any number: \n");
    scanf("%d", &number);
    prime_factors(number);
    return 0;
}
void prime_factors (int x)
{
    printf("The prime factors of %d are: \n", x);
    for (int i=2;i<=x;i++)
    {
        int j;
        if (x%i == 0)
        // Implies that i is a factor of the number. Now we have to check if i is prime or not.
        // So whatever value of i is, we have to check if it is prime or not. If it is prime, we can print it as a prime factor of the number.
        {
            if (i>=2)
            {
                for (j=2;j<i;j++)
                {
                    if (i%j != 0)
                    continue;
                    else
                    break;
                }
                if (j == i)
                printf("%d,", i);
            }
        }
    }
}