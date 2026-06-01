#include <stdio.h>
int main()
{
    int number =1, no_of_rows, row;
    char space = ' ';
    int max_number_in_row;
    // The maximum number in any row is equal to the sum of the first n natural numbers, where n is the row number.
    // This can be calculated using the formula n(n+1)/2.
    printf("Enter the number of rows the pyramid must have: \n");
    scanf("%d", &no_of_rows);
    for (row=1;row<=no_of_rows;row++)
    {
        max_number_in_row = row*(row+1)/2;
        int i = 1;
        while (i<=(no_of_rows-row))
        {
            printf("%c", space);
            i++;
        }
        while (number <= max_number_in_row)
        {
            printf("%d ", number);
            printf("%c%c", space, space);
            number++;
        }
        printf("\n");
    }
}