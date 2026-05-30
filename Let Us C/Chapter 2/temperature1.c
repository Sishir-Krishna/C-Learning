#include <stdio.h>
#include <math.h>
int main()
{
    float wcf, t, v;
    // wcf is the wind chill factor, t is the temperature in Centigrade and v is the wind speed in meters per second.
    printf("Enter the Temperature and wind speed: \n");
    scanf("%f %f", &t, &v);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v, 0.16);
    printf("The wind chill factor is %f.\n", wcf);
    return 0;
}