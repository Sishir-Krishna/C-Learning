#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int r,g,b,w;
    float c,m,y,k;
    // r is red, g is green, b is blue, w is white, c is cyan, m is magenta, y is yellow and k is black.
    printf("Enter the values of red, green and blue (between 0 and 255):\n");
    scanf("%d %d %d", &r, &g, &b);
    if ((r>=0 && r<=255) && (g>=0 && g<=255) && (b>=0 && b<=255))
    {
        w = (double)fmax(fmax(r/255, g/255), b/255);
        // Generally the function to find maximium of three numbers is fmax(fmax(a,b),c) 
        //where a, b and c are the three numbers. Here we are finding the maximum of r/255, g/255 and b/255.
        c = (w-r/255)/w;
        m = (w-g/255)/w;
        y = (w-b/255)/w;
        k = 1-w;
        if(r==0 && g==0 && b==0)
        {
            c=0;m=0;y=0;k=1;
            printf("The CMYK values are: %.1f %.1f %.1f %.1f.\n", c, m, y, k);
        }
    }
    else
    printf("Invalid input. Please enter values between 0 and 255.\n");
    return 0;
}