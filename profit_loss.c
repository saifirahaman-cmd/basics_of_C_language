/*TOPIC: PROFIT, LOSS, OR BREAK-EVEN (CONDITIONAL CHAINS)*/

#include <stdio.h>

int main() {
    int cp; // Cost Price
    int sp; // Selling Price
    
    printf("Enter the cost price : ");
    scanf("%d", &cp);
    printf("Enter the selling price : ");
    scanf("%d", &sp);
  
    if (cp < sp) {
        int profit = sp - cp;
        printf("The seller has made profit and the profit is %d taka\n", profit);
    }
    else if (cp > sp) {
        int loss = cp - sp;
        printf("The seller has made loss and the loss is %d taka\n", loss);
    }
    else {
        printf("No profit, no loss. The seller broke even!\n");
    }    
    return 0;
}
