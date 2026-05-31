/* Method 1: Using an extra variable (y) */

#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the number : "); 
    scanf("%d", &x);
    if (x < 0) {
        y = x * (-1);
        printf("The absolute value is : %d\n", y);
    }
    else {
        printf("The absolute value is : %d\n", x);
    }
    return 0;
}
