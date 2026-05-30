#include <stdio.h>
int main()
{
    int age_r, age_s, age_a;
    printf("Enter the ages of Ram, Shyam & Ajay: \n");
    scanf("%d %d %d", &age_r, &age_s, &age_a);
    if (age_r/age_s == 0 && age_r/age_a == 0)
    printf("Ram is the youngest.\n");
    else if (age_s/age_r == 0 && age_s/age_a == 0)
    printf("Shyam is the youngest.\n");
    else if (age_a/age_r == 0 && age_a/age_s == 0)
    printf("Ajay is the youngest.\n");
    else
    {
        if (age_r/age_s ==1)
        {
            if (age_r<age_a)
            printf("Ram and Shyam are the youngest.\n");
            else
            printf("Ajay is the youngest.\n");
        }
        else if (age_s/age_a == 1)
        {
            if (age_s<age_r)
            printf("Shyam and Ajay are the youngest.\n");
            else
            printf("Ram is the youngest.\n");
        }
        else if (age_a/age_r == 1)
        {
            if (age_a<age_s)
            printf("Ajay and Ram are the youngest.\n");
            else
            printf("Shyam is the youngest.\n");
        }
        else if (age_a == age_r && age_a == age_s)
        {
            printf("All are of the same age.\n");
        }
    }
    return 0;
}