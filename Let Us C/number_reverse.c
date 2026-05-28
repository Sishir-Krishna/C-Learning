#include <stdio.h>
int main()
{
    int N,d1,d2,d3,d4,d5, RN;
    printf("Enter a 5 digit number: \n");
    scanf("%d", &N);
    d1 = N%10;
    d2 = (N/10)%10;
    d3 = (N/100)%10;
    d4 = (N/1000)%10;
    d5 = (N/10000);
    RN = d1*10000 + d2*1000 +d3*100 +d4*10 + d5;
    printf("The reversed number is %d\n", RN);
    return 0;
}