#include <stdio.h>
int no_of_even(int);
int no_of_odd(int);
int no_of_positive(int);
int no_of_negative(int
);
int main()
{
    int num[25];
    printf("Enter the numbers: \n");
    for (int i =0; i<=24; i++)
    {
        scanf("%d ", &num[i]);
    }
    int number_of_positive_numbers = no_of_positive(num);
    int number_of_negative_numbers = no_of_negative(num);
    int number_of_even_numbers = no_of_even(num);
    int number_of_odd_numbers = no_of_odd(num);
    printf("The number of positive numbers in the given numbers are: %d.\n", number_of_positive_numbers);
    printf("The number of negative numbers in the given numbers are: %d.\n", number_of_negative_numbers);
    printf("The number of odd numbers in the given numbers are: %d.\n", number_of_odd_numbers);
    printf("The number of even numbers in the given numbers are: %d.\n", number_of_even_numbers);
    return 0;
}