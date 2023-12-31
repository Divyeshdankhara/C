#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,total,per;

    printf("Enter the mark Subject1 :-> ");
    scanf("%f",&sub1);
    printf("Enter the mark Subject2 :-> ");
    scanf("%f",&sub2);
    printf("Enter the mark Subject3 :-> ");
    scanf("%f",&sub3);

    total = sub1 + sub2 + sub3;
    per = total * 100 / 300;

    printf("Total is :-> %.2f\n",total);
    printf("Percentage is :-> %.2f",per);

    return 0;
}