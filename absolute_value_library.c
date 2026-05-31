    /* Method 3: abs(x) automatically converts negative to positive */

#include <stdio.h>
#include <stdlib.h> // Always required for abs()
int main() {
    int x;
    printf("Enter the number : "); 
    scanf("%d", &x);
    printf("The absolute value is : %d\n", abs(x));
    return 0;
}
