#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
if (a<b){
    if (a<c) { // b is eliminaated
        printf("Smallest Number  : %d", a);
    }
    else {  // a is eliminaated
        printf("Smallest Number  : %d", c);
    }
}
else {
    if (b<c) { // a is eliminaated
        printf("Smallest Number  : %d", b);
    }
    else {  // b is eliminaated
        printf("Smallest Number  : %d", c);
    }
}
    return 0;
}
