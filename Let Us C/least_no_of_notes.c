#include <stdio.h>
int main()
{
    int N, n1, n2, n5, n10, n50, n100, sn;
    // n1, n2, n5, n10, n50, n100 are the number of Rs. 1, 2, 5, 10, 50 & 100 notes
    // required to make a total amount of Rs. N using the least number of notes possible (sn). 
    printf("Enter the amount of Rs. \n");
    scanf("%d", &N);
    n100 = N/100;
    n50 = (N%100)/50;
    n10 = ((N%100)%50)/10;
    n5 = (((N%100)%50)%10)/5;
    n2 = ((((N%100)%50)%10)%5)/2;
    n1 = (((((N%100)%50)%10)%10)%5)%2;
    sn = n1+ n2 + n5 + n10 + n50 + n100;
    printf("The least number of notes that can make a total of Rs. %d is %d.\n", N, sn);
    return 0;
}