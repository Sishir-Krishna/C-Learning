#include <stdio.h>
int main()
{
//Armstrong numbers are numbers whose sum of the cubes of their digits is equal to the number itself.
//For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
    int i=1,d1,d2,d3,sum;
    while(i<=500)
    {
        d1=i%10; //Extract the last digit
        d2=(i/10)%10; //Extract the second last digit
        d3=(i/100)%10; //Extract the third last digit
        sum=d1*d1*d1 + d2*d2*d2 + d3*d3*d3; //Calculate the sum of cubes of digits
        if(sum==i) //Check if the sum is equal to the original number
        {
            printf("%d is an Armstrong number.\n", i);
        }
        i++;
    }
    return 0;
}