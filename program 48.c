#include <stdio.h>

int main() 
{
    printf("Register number: RA2211042010060\n");
    int num1;
    int rightdigit;
    printf("enter the number: ");
    scanf("%d",&num1);
    rightdigit = num1%10;
    printf("\nthe right most digit is: %d",rightdigit);
}
