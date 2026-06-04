#include <stdio.h>
//Ternary Operator
//(Condition) ? (Expression to run if TRUE) : (Expression to run if FALSE);
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
    (((x2-x1)*(y3-y2))==((x3-x2)*(y2-y1))) ? printf("All 3 points fall on one straight line") : printf("It's not a straight line"); 
  return 0;
}

