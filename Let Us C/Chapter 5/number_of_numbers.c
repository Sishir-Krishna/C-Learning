#include <stdio.h>
int main()
{
    //We want to enter numbers until user wants. At the end, we want to display how many positive, negative and 
    //zeroes were entered by the user.
    char choice='y';
    int number_of_positive_num=0,number_of_negative_num=0,no_of_zeroes=0;
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    while (choice != 'n')
    {
        printf("Do you want to enter another number? \n");
        scanf(" %c", &choice);
        // VVVIP
        //We have put a space before %c in scanf to consume the newline character left in the input buffer after reading the number.
        if (choice == 'y')
        {
            scanf("%d", &number);
            if (number>0)
            number_of_positive_num++;
            else if (number<0)
            number_of_negative_num++;
            else
            no_of_zeroes++;
        }
    }
    // When the user enters 'n', we need to check the last entered number 
    // and update the count of positive, negative and zeroes accordingly.
    if (choice == 'n')
    {
        if (number>0)
        number_of_positive_num++;
        else if (number<0)
        number_of_negative_num++;
        else
        no_of_zeroes++;
    }
    printf("Number of positive numbers: %d\n", number_of_positive_num);
    printf("Number of negative numbers: %d\n", number_of_negative_num);
    printf("Number of zeroes: %d\n", no_of_zeroes);
    return 0;
} 