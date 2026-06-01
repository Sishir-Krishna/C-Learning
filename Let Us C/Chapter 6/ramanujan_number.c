//Ramanujan number is the smallest number that can be expressed as the sum of cubes of 2 positive integers in two different ways. 
//The number is 1729, which can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to find the Ramanujan number.
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,ramanujan_number,user_input;
    printf("Enter the upper limit upto which you want to find all the Ramanujan numbers: \n");
    scanf("%d", &user_input);
    int cube_root = pow(user_input,1.0/3.0); // Calculate the cube root of the user input to limit the search space
    for(a=1;a<=cube_root;a++)
    {
        for (b=1;b<=cube_root;b++)
        {
            // Check if a^3 + b^3 equals any other combination
            int sum1;
            sum1 = a*a*a + b*b*b;
            if (5)
            {
                for (c=1;c<=cube_root;c++)
                {
                    for (d=1;d<=cube_root;d++)
                    {
                        int sum2;
                        sum2 = c*c*c + d*d*d;
                        if (sum1!=sum2)
                        {
                            continue; // Skip if sums are not equal
                        }
                        if (sum1 == sum2 && (a != c && a != d) && (b != c && b != d) && a<c && c<d) 
                        // Check if the sums are equal and the integers are distinct
                        {
                            ramanujan_number = sum1;
                            printf("The Ramanujan number is: %d\n", ramanujan_number);
                            printf("It can be expressed as %d^3 + %d^3 and %d^3 + %d^3\n", a, b, c, d);
                        }
                    }
                }
            } 
        }
    }
    return 0;
}