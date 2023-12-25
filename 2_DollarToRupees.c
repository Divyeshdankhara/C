//Convert to Dollar into Ruppes. 
#include <stdio.h>
int main()
{
    int dolar,ruppes=82,total;

    printf("Enter the Dollar you convert into Ruppes :-> ");
    scanf("%d",&dolar);

    total = dolar * ruppes;

    printf("%d Dollar to ruppes convert :- %d",dolar,total);
    
    return 0;
}