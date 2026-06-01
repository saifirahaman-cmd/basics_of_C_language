/* TOPIC: Validating Number Range Using Logical AND */

#include <stdio.h>
#include <stdlib.h> // Required for abs()
int main() {
    printf("Enter a number : ");
    int x;
    scanf("%d", &x);
    // Convert x to positive so negative 3-digit numbers match the condition
    int y = abs(x); 
    if (y > 99 && y < 1000) {
        printf("It's a 3-digit number\n");
    } else {
        printf("It's not a 3-digit number\n");
    }
    return 0;
}
