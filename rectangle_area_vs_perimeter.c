/* TOPIC: Comparing Rectangle Area and Perimeter */

#include <stdio.h>
int main() {
    int L, B;
    
    printf("Enter the Length : ");
    scanf("%d", &L);
    printf("Enter the Breadth : ");
    scanf("%d", &B);
    
    int A = L * B;       // Area (Length * Breadth)
    int P = 2 * (L + B); // Perimeter (2 * (Length + Breadth))
    
    if (A > P) {
        printf("area of the rectangle is greater than it's perimeter.\n");
    }
    else if (A < P) {
        printf("area of the rectangle is not greater than its perimeter.\n");
    }
    else {
        printf("area of the rectangle is equal to it's perimeter.\n");
    }
    
    return 0;
}
