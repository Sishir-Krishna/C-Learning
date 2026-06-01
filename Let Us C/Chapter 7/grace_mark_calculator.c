#include <stdio.h>
#include <stdlib.h>
int main()
{
    int class, subjects_failed;
    printf("Enter the class obtained (1, 2, or 3): \n");
    scanf("%d", &class);
    printf("Enter the number of subjects failed: \n");
    scanf("%d", &subjects_failed);
    switch(class)
    {
        case 3:
        {
            if (subjects_failed >3)
            {
                printf("Grace marks obtained: 0\n");
                exit(0);
            }
            else
            {
                printf("5 grace marks obtained in each subject.\n");
                exit(0);
            }
        }
        case 2:
        {
            if (subjects_failed >2)
            {
                printf("Grace marks obtained: 0\n");
                exit(0);
            }
            else
            {
                printf("4 grace marks obtained in each subject.\n");
                exit(0);
            }
        }
        case 1:
        {
            if (subjects_failed >1)
            {
                printf("Grace marks obtained: 0\n");
                exit(0);
            }
            else
            {
                printf("5 grace marks obtained in each subject.\n");
                exit(0);
            }
        }
    }
}