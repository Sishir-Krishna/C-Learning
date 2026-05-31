// The series is 1/1! + 2/2! + 3/3! + 4/4! + .... + n/n!
// We can also write the series as 1/0! + 1/1! + 1/2! + 1/3! + .... + 1/(n-1)!
// So first we have to write a loop to calculate the factorial of the number 
// and then we will calculate the term and add it to the sum. 
#include <stdio.h>
int main()
{
    int i,count,n_terms;
    float term,sum=0.0;
    printf("Enter the number of terms upto which you want to find the sum of the series Σ 1/(n-1)! : \n");
    scanf("%d", &n_terms);
    for (count=1; count<=n_terms; count++)
    {
        int factorial=1,i=1;
        while(i < count)
        {
            factorial *= i;
            i++;
        }
        term = 1.0/factorial;
        sum += term;
        continue;
    }
    printf("The sum of the series is: %f\n", sum);
    return 0;
}