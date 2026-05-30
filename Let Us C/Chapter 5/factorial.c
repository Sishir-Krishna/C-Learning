#include <stdio.h>
int main()
{
    int n,i=0,factorial=1;
    printf("Enter any positive integer: \n");
    scanf("%d", &n);
    while(i<=n)
    {
        if (i==0)
        factorial = 1;
        else
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}