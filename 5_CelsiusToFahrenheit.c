#include <stdio.h>
int main()
{
    float celsius,fahrenheit;

    printf("Enter the temperature in Celsius :-> ");
    scanf("%f",&celsius);

    fahrenheit = celsius*9/5+32;

    printf("%.2f temperature Celsius to temperature Fahrenheit is :-> %.2f",celsius,fahrenheit);

    return 0;
}