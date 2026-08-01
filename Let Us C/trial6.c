#include <stdio.h>
int main()
{
    char suite = 'c';
    switch (suite)
    {
        case 1:
            printf("Hearts\n");
        case 2:
            printf("Diamonds\n");
        case 'c':
            printf("Clubs\n");
        default :
            printf("Spades\n");
    }
    printf("I thought one wears a suite");
    return 0;
}