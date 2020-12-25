#include <stdio.h>

int main()
{
    unsigned int count=0;
    unsigned long long sum=0LL;
    unsigned int i=1;
    
    //Entering no. of terms
    printf("Enter the number of terms: ");
    scanf("%u",&count);

    //Calculations of summing up
    for(i;i<=count;i++)
    {
        sum+=i;
        printf("+%u",i);
    }
    //Printing Answer
    printf("\nSum is %llu\n",sum);
    
    return 0;
}