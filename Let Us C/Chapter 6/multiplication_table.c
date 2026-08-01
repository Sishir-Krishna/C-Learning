#include <stdio.h>
int main()
{
    int num,i,product,table_end;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Enter the end of the table: \n");
    scanf("%d", &table_end);
    printf("The multiplication table of %d is: \n", num);
    for (i=1;i<=table_end;i++)
    {
        product = num*i;
        printf("%d * %d = %d\n",num, i, product);
    }
    return 0;
}