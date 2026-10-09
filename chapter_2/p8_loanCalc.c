// Calculates remaining loan amount after 3 monthly payments. 
// Inital loan amount, annual interest rate, and monthly payment taken from the user.

#include<stdio.h>

int main (void)
{
    float initialAmount, annualInterest, monthlyInterest, monthlyPayment, loanAfter1Month, loanAfter2Month, loanAfter3Month;

    printf("Enter the initial loan amount: ");
    scanf("%f", &initialAmount);
    printf("Enter annual interest rate: ");
    scanf("%f", &annualInterest);
    printf("Enter monthly payments: ");
    scanf("%f", &monthlyPayment);

    monthlyInterest = annualInterest / ( 12.0f * 100.0f ) ;
    loanAfter1Month = initialAmount - monthlyPayment + ( initialAmount * monthlyInterest ) ;
    loanAfter2Month = loanAfter1Month - monthlyPayment + ( loanAfter1Month * monthlyInterest ) ;
    loanAfter3Month = loanAfter2Month - monthlyPayment + ( loanAfter2Month * monthlyInterest ) ;

    printf("Loan amount after 1st payment: %.2f\n", loanAfter1Month);
    printf("Loan amount after 2nd payment: %.2f\n", loanAfter2Month);
    printf("Loan amount after 3rd payment: %.2f\n", loanAfter3Month);

    return 0;
}
