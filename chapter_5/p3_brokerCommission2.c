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

// Added in v2:
// Takes the number of shares and value of a share from user to compute transaction value.
// Shows the commission of a rival broker that is calculated as:
// $33 plus 3¢ per share for fewer than 2000 shares 
// $33 plus 2¢ per share for 2000 shares or more

#include<stdio.h>

int main (void)
{
    float transaction, commission, shareValue, rivalCommission;
    int shareCount;

    printf("Rnter the number of shares: ");
    scanf("%d", &shareCount);
    printf("Enter the value of a share: ");
    scanf("%f", &shareValue);

    transaction = shareValue * shareCount;
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

    printf("Commission of the broker is: $%.2f\n", commission);

    rivalCommission = (shareCount >= 2000) ? 
        (33.00f + (0.02f * shareCount)) : (33.00f + (0.03f * shareCount));
    printf("Commission of another broker is: $%.2f\n", rivalCommission);

    return 0;
}
