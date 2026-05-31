 /* Method 2: Eliminates extra variable, only one variable in-place and keeps a single printf */

#include <stdio.h>
int main() {
    printf("Enter the number: "); 
    int x;
    scanf("%d", &x);
    if (x < 0) {
        x = x * (-1); 
    }
    printf("The absolute value is: %d\n", x);
    return 0;
}
