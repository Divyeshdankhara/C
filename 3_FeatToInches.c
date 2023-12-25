# include <stdio.h>
int main()
{
    int feet,total;

    printf("Enter the Feet :-> ");
    scanf("%d",&feet);

    total = feet * 12;

    printf("%d Feet to Inches convert :- %d",feet,total);
    
    return 0;
}