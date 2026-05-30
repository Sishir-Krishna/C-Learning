#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,max_no,min_no,range;
    char choice = 'y';
    printf("Enter a number: \n");
    scanf("%d", &num);
    max_no = num;
    min_no = num;
    temp = num;
    while (choice != 'n')
    {
    printf("Do you want to enter another number? (y/n): \n");
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        scanf("%d", &num);
        if(num>max_no)
        max_no = num;
        else
        max_no = max_no;
        if(num<min_no)
        min_no = num;
        else
        min_no = min_no;
    }
    }
    range = max_no - min_no;
    printf("The maximum number is %d\n", max_no);
    printf("The minimum number is %d\n", min_no);
    printf("The range of the given numbers is: %d\n", range);
    return 0;
}