#include <stdio.h>
int main()
{
    float celsius,fahrenheit;

    printf("Enter the temperature in Celsius :-> ");
    scanf("%f",&celsius);

    fahrenheit = celsius*9/5+32;

    printf("%f temperature Celsius to temperature Fahrenheit is :-> %f",celsius,fahrenheit);

    return 0;
}