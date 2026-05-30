#include <stdio.h>
int main()
{
    int i=0;
    while(i<=255)
    {
        printf("The ASCII value %d represents the character %c.\n",i, i);
        i++;
    }
    return 0;
}