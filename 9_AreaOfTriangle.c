#include <stdio.h>
int main()
{
    float h,b,area;

    printf("Enter the Height :-> ");
    scanf("%f",&h);
    printf("Enter the Base :-> ");
    scanf("%f",&b);

    area = h * b /2;

    printf("Area of Triangle :-> %.2f",area);

    return 0;
}