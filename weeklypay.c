#include <stdio.h>

#define salaryRate 12.00
#define bonus 6.00

int main()
{
    double hours=0.00;
    double income=0.00;
    double finalIncome=0.00;
    
    printf("Enter number of hours worked: ");
    scanf("%lf",&hours);
    
    if(hours>40)
    {
        income=(salaryRate*hours)+(bonus)*(hours-40);
    }
    else
    {
        income=(salaryRate*hours);
    }

    if(income<=300)
    {
        finalIncome=income*0.85;
    }
    else if (income>300 && income<=450)
    {
        finalIncome=300*0.85+(income-300)*0.8;
    }
    else if (income>450)
    {
        finalIncome=300*0.85+150*0.8+(income-450)*0.75;
    }

    printf("\nThis is your weekly salary before taxes: %.2f",income);
    printf("\nYour taxes this week: %.2f",income-finalIncome);
    printf("\nThis is your net weekly salary: %.2f",finalIncome);
    
    return 0; 
}