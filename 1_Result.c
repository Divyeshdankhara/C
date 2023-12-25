//write program three subjects total marks & percentage.
#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,total,percentage;

    printf("Enter the mark Sub1 :-> ");
    scanf("%f",&sub1);
    printf("Enter the mark Sub2 :-> ");
    scanf("%f",&sub2);
    printf("Enter the mark Sub3 :-> ");
    scanf("%f",&sub3);

    total = sub1 + sub2 + sub3;
    percentage = total * 100 / 150;

    printf("Total mark is :-> %.2f\n",total);
    printf("Percentage is :-> %.2f",percentage);

    return 0;
}