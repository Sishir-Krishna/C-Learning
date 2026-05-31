#include <stdio.h>
int main()
{
    int num,i,product;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The multiplication table of %d is: \n", num);
    for (i=1;;i++)
    {
        product = num*i;
        printf("%d * %d = %d\n",num, i, product);
        continue;
    }
    return 0;
}