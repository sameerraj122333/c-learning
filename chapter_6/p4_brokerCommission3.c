
// Calculates the commission of a stocks broker.
// Broker charges the following amounts:
/*
Transaction size    Commission rate
Under $2,500        $30 + 1.7%
$2,500–$6,250       $56 + 0.66%
$6,250–$20,000      $76 + 0.34%
$20,000–$50,000     $100 + 0.22%
$50,000–$500,000    $155 + 0.11%
Over $500,000       $255 + 0.09%
*/

#include<stdio.h>

int main (void)
{
    float transaction, commission;
    for (;;){
      printf("Rnter the transaction amount (in dollars): ");
      scanf("%f", &transaction);

      if (transaction == 0) break;

      if(transaction < 2500.00f)
        commission = 30.00f + (0.017f * transaction);
      else if (transaction < 6250.00f)
        commission = 56.00f + (0.0066f * transaction);
      else if (transaction < 20000.00f)
        commission = 76.00f + (0.0034f * transaction);
      else if (transaction < 50000.00f)
        commission = 100.00f + (0.0022f * transaction);
      else if (transaction < 500000.00f)
        commission = 155.00f + (0.0011f * transaction);
      else
        commission = 255.00f + (0.0009f * transaction);

      if (commission < 39.00f) commission = 39.00f;

      printf("The commission is: $%.2f\n", commission);
    }

    return 0;
}
