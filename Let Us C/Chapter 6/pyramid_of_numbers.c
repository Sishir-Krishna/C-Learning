#include <stdio.h>
int main()
{
    int number =1, no_of_rows, row;
    char space = ' ';
    // The maximum number in any row is equal to the sum of the first n natural numbers, where n is the row number.
    // This can be calculated using the formula n(n+1)/2.
    printf("Enter the number of rows the pyramid must have: \n");
    scanf("%d", &no_of_rows);
    for (row=1;row<=no_of_rows;row++)
    {
        int i = 1;
        while (i<=(no_of_rows-row))
        {
            printf("%c", space);
            i++;
        }
        for (int j=1;j<=row;j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}