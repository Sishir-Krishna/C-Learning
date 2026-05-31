#include <stdio.h>
int main()
{
    int num,user_num;
    printf("To find what prime numbers exsist upto a number of your choice.\n");
    printf("Enter a number: \n");
    scanf("%d",&user_num);
    printf("Prime numbers between 1 and %d are: \n",user_num);
    printf("%d\n",1);
    for(num=2;num<=user_num;num++)
    {
        int count;
        for(count=2;count<num;count++)
        {
            if(num%count ==0)
            break;
        }
        if(count == num)
        printf("%d\n",num);
    }
}