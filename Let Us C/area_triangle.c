#include <stdio.h>
#include <math.h>
int main()
{
    float s1, s2, s3, S, A; 
    printf("Enter the sides of the triangle: \n");
    scanf("%f %f %f", &s1, &s2, &s3);
    S = (s1+s2+s3)/2; 
    A = pow(S*(S-s1)*(S-s2)*(S-s3), 0.5);
    printf("The area of the given triangle is %f.\n)", A);
    return 0;
}