#include <stdio.h>
int factorial(int x);
int main()
{
    int number,fact;
    printf("Enter a number: \n");
    scanf("%d", &number);
    fact = factorial(number);
    printf("Factorial of %d is %d\n", number, fact);
    return 0;
}
int factorial(int x)
{
    int i, factorial =1;
    for (i=1;i<=x;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}