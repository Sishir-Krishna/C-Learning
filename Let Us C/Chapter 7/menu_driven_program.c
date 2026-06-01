#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    printf("Menu:\n");
    printf("1. Factorial of a number\n");
    printf("2. Prime or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice)
    {
        default:
            printf("Invalid choice. Please try again.\n");
            scanf("%d", &choice);
        case 1:
            int number, factorial =1;
            printf("Enter a number: \n");
            scanf("%d", &number);
            for (int i=1;i<=number;i++)
            {
                factorial *= i;
            }
            printf("Factorial of %d is %d\n", number, factorial);
            break;
        case 2:
            int number;
            printf("Enter a number: \n");
            scanf("%d", &number);
            for (int i =2;i<number;i++)
            {
                if (number%i == 0)
                printf("%d is not a prime number\n", number);
                else
                printf("%d is a prime number\n", number);
            }
            break;
        case 3:
            int number;
            printf("Enter a number: \n");
            scanf("%d", &number);
            if (number%2 == 0)
            printf("%d is an even number.\n", number);
            else
            printf("%d is an odd number", number);
            break;
        case 4:
            printf("Exiting the program.\n");
            exit(1);
    }
}