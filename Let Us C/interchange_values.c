#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any 2 numbers: \n");
    scanf("%d %d", &a, &b);
    c =a;
    a =b;
    b = c;
    printf("The interchanged numbers are %d & %d.\n", a, b);
    return 0;
}