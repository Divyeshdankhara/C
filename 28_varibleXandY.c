#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the value of X :-> ");
    scanf("%d",&x);
    printf("Emter the value of Y :-> ");
    scanf("%d",&y);

    if((x<2000&&3000>x)&&(100<y&&y<500))
    {
        printf("Value of X is :-> %d\n",x);
        printf("Value of Y is :-> %d",y);
    }
}