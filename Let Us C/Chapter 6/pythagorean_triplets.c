#include <stdio.h>
#include <math.h>
int main()
{
    int s1,s2,s3,num;
    printf("Enter the number upto which you want to find the pythagorean triplets: \n");
    scanf("%d", &num);
    printf("All pythagorean triplets between 1 and %d are: \n", num);
    for(s1=1;s1<=num;s1++)
    {
        for (s2=1;s2<=num;s2++)
        {
            for (s3=1;s3<=num;s3++)
            {
                if(pow(s1,2)+pow(s2,2)==pow(s3,2))
                //According to this logic s3 is the largest number and s1 and s2 are the smaller numbers.
                //It means that s1 and s2 can be interchanged and the triplet will still be a pythagorean triplet.
                //So to avoid printing the same triplet twice we can add a condition that s1 should be less than s2.
                { 
                    if (s1<s2)
                    printf("%d %d %d\n", s1, s2, s3);
                }
            }
        }
    }
    return 0;
}