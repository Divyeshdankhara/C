#include <stdio.h>
int main()
{
    float r,area;

    printf("Enter the Radius :-> ");
    scanf("%f",&r);

    area = 3.14 * r;

    printf("Area of Circle is :-> %.2f",area);

    return 0;
}