#include <stdio.h>
int main()
{
    int h,ts,c1,c2,c3;
    float cc;
    // h is the hardness of the steel, ts is the tensile strength of the steel, cc is the carbon content of the steel
    // c1 is condition 1, c2 is condition 2 and c3 is condition 3.
    printf("Enter the values of Hardness, Carbon Content, & Tensile Strength of the steel:\n");
    scanf("%d %f %d", &h, &cc, &ts);
    //Evaluating if condition 1 is true or false. Condition for true is h>50 and for false is h<=50.
    c1 = (h>50);
    //Evaluating if condition 2 is true or false. Condition for true is cc<0.7 and for false is cc>=0.7.
    c2 = (cc<0.7);
    //Evaluating if condition 3 is true or false. Condition for true is ts>5600 and for false is ts<=5600.
    c3 = (ts>5600);
    if (c1 && c2 && c3)
    // If all three conditions are true then the grade of the steel is 10.
    printf("Grade of the steel is 10.\n");
    else if (c1 && c2 && !c3)
    // If conditions 1 and 2 are true but condition 3 is false then the grade of the steel is 9.
    printf("Grade of the steel is 9.\n");
    else if (!c1 && c2 && c3)
    // If condition 2 is true but conditions 1 and 3 are false then the grade of the steel is 8.
    printf("Grade of the steel is 8.\n");
    else if (c1 && !c2 && c3)
    // If condition 1 is true but conditions 2 and 3 are false then the grade of the steel is 7.
    printf("Grade of the steel is 7.\n");
    else if ((!c1 && !c2 && c3) || (!c1 && c2 && !c3) || (c1 && !c2 && !c3))
    // If any one condition is true and the other two are false then the grade of the steel is 6.
    printf("Grade of the steel is 6.\n");
    else
    // If none of the conditions are true then the grade of the steel is 5.
    printf("Grade of the steel is 5.\n");
    return 0;
}