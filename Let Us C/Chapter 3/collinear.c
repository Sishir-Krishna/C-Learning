#include <stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter the co-ordinates (x1,y1), (x2,y2), & (x3,y3):\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y1)/(x3-x1);
    if (m1 == m2)
    printf("The three points are collinear.\n");
    else
    printf("The three points are not collinear.\n");
    return 0;
}