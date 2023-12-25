#include <stdio.h>
int main()
{
    float feet,total;

    printf("Enter the Feet :-> ");
    scanf("%f",&feet);

    total = feet * 12;

    printf("%.2f Feet to Inches convert :- %.2f",feet,total);
    
    return 0;
}