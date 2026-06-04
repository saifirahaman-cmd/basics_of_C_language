
#include <stdio.h>

int main() { 
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the point X1 : ");
    scanf("%d",&x1);
    printf("Enter the point Y1 : ");
    scanf("%d",&y1);
    printf("Enter the point X2 : ");
    scanf("%d",&x2);
    printf("Enter the point Y2 : ");
    scanf("%d",&y2);
    printf("Enter the point X3 : ");
    scanf("%d",&x3);
    printf("Enter the point Y3 : ");
    scanf("%d",&y3);

    if (((x2-x1)*(y3-y2))==((x3-x2)*(y2-y1))) {   
        printf("All three points fall on one straight line");
    }
    else {
        printf("It's not a straight line");
    }

    return 0;
}


/* Math Note: Instead of comparing slopes using division (m1 = m2), 
       we use cross-multiplication to keep the program completely safe 
       from vertical line crashes (division by zero).
       Formula: (x2 - x1) * (y3 - y2) == (x3 - x2) * (y2 - y1) */
