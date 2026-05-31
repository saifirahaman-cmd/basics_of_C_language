#include<stdio.h>
int main() {
    printf("Enter the year to check if it's a leap year or not : ");
    int yer;
    scanf("%d",&year);
    if (year%4==0) {
        if (year%100==0) {
            if (year%400==0) {
                printf("The year is leap year\n");
            }
            else {
                printf("The year is not leap year\n");
            }
        }
        else {
            printf("The year is leap year\n");
        }
    }
else {
        printf("The year is not leap year\n");
}
    return 0;
}
