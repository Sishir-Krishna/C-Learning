#include <stdio.h>
#include <math.h>
int main()
{
    int num,remainder,i=0,octal_rep=0,temp;
    printf("Enter any integer: \n");
    scanf("%d", &num);
    temp =num;
    while(num/8 != 0)
    {
        remainder = num%8;
        num /= 8;
        octal_rep = octal_rep + remainder*pow(10,i);
        i++;
    }
    // When num/8 becomes 0, we need to add the last digit (remainder of final division) to the octal representation.
    //This is because the loop terminates before adding the last digit to the octal representation.
    if (num/8 == 0)
    {
        octal_rep = octal_rep + (num%8)*pow(10,i);
    }
    printf("Octal representation of the given number %d is: %d\n", temp, octal_rep);
    return 0;
}