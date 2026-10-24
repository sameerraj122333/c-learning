// This program helps the user to maintain a checkbook by providing options of clear, credit, or debit amount and check the balance.

#include<stdio.h>

int main (void)
{
  float input, balance = 0;
  int command;

  printf("**** ACME checkbook-balancing program ****\n");
  printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

  for (;;)
  {
    printf("Enter a command: ");
    scanf("%d", &command);
    switch (command)
    {
      case 0:
        {
          balance = 0;
          printf("Balance cleared\n");
          break;
        }
      case 1:
        {
          printf("Enter the amount of credit: ");
          scanf("%f", &input);
          balance += input;
          break;
        }
      case 2:
        {
          printf("Enter the amount of debit: ");
          scanf("%f", &input);
          balance -= input;
          break;
        }
      case 3:
        {
          printf("Current balance: %.2f\n", balance);
          break;
        }
      case 4: return 0;
      default: printf("Invalid command.\n"); break;
    } 
  }
  
}

