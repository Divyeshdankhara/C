#include <stdio.h>
int main()
{
    float inches,total;

    printf("Enter the Inches :-> ");
    scanf("%f",&inches);

    total = inches * 2.54;

    printf("%.2f Inches to Centimeter :-> %.2f",inches,total);

    return 0;
}