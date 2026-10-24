// Calculates the loan balance remaining after a specific number of payments.

#include<stdio.h>

int main (void)
{
  float monthlyPayment, initialAmount, monthlyInterest, annualInterest, m;

  printf("Enter the initial loan amount: ");
  scanf("%f", &initialAmount);
  printf("Enter annual interest rate: ");
  scanf("%f", &annualInterest);
  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPayment);

  int n;
  printf("Enter number of payments: ");
  scanf("%d", &n);

  m = initialAmount;
  monthlyInterest = annualInterest / ( 12.0f * 100.0f ) ;
  for (int i = 0; i < n; i++)
  {
    m = m - monthlyPayment + (m * monthlyInterest);
    printf("Loan balance after %d payment: %.2f\n", n, m);
  }
  return 0;
}
