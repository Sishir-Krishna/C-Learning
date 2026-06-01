#include <stdio.h>
#include <stdlib.h>
// We use <stdlib.h> to allow the use of exit() function. We fill in 0 if it is a successfull exit and 1 if otherwise.
int main()
{
    int choice;
    int number;
    printf("Menu:\n");
    printf("1. Factorial of a number\n");
    printf("2. Prime or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    // If we use an if block we can only get a chance to re-enter the choice once, 
    // but if we use a for loop we can get multiple chances to enter the choice until the user enters a valid choice.
    for (;choice < 1 || choice > 4;)
    {
        printf("Invalid choice. Please try again.\n");
        scanf("%d", &choice);
    }
    switch (choice)
    {
        case 1:
        //Declaring variables inside a switch case without a block
        //In C, declaring variables like int number, factorial = 1 directly inside a case (without curly braces {})
        //is either illegal or undefined behavior depending on the compiler.
        {   
            int factorial =1;
            printf("Enter a number: \n");
            scanf("%d", &number);
            for (int i=1;i<=number;i++)
            {
                factorial *= i;
            }
            printf("Factorial of %d is %d\n", number, factorial);
            break;
        }
        case 2:
            {
                int number;
                printf("Enter a number: \n");
                scanf("%d", &number);
                for (int i =2;i<number;i++)
                {
                    if (number%i == 0)
                {
                    printf("%d is not a prime number\n", number);
                    break;
                }
                    else
                    {
                        printf("%d is a prime number\n", number);
                        break;
                    }
                }
                break;
            }
        case 3:
            {
                int number;
                printf("Enter a number: \n");
                scanf("%d", &number);
                if (number%2 == 0)
                printf("%d is an even number.\n", number);
                else
                printf("%d is an odd number", number);
                break;
            }
        case 4:
            printf("Exiting the program.\n");
            exit(0);
        // Placing defalut anywhere in the switch statement will work but it is a good practice to place it at the end of the switch statement.
        // Because if it is placed at the beginning, even if it scans for the valid choice again, it will not get to choose the valid choice.
        // Instead it will scan for the choice again and then execute the immediate next case.
    }
}