#include <stdio.h>
int main()
{
    float l,w,area;

    printf("Enter the Length :-> ");
    scanf("%f",&l);
    printf("Enter the Width :-> ");
    scanf("%f",&w);

    area = l * w;

    printf("Area of Rectangle :-> %.2f",area);

    return 0;
}