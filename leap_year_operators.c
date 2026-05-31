#include <stdio.h>
int main() {
    printf("Enter the year to check if it's a leap year or not : ");
    int year;
    scanf("%d", &year);

    /*A year is a leap year if, 
      1) It is divisible by 4 AND not divisible by 100, 
      2) OR It is divisible by 400.*/
  
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("The year is a leap year\n");
    } 
    else {
        printf("The year is not a leap year\n");
    }

    return 0;
}
