#include <stdio.h>
#include <stdlib.h>

int currency_converter(float currency_USD,float currency_Egy)
{
    currency_Egy=currency_USD*15.75;
    printf("Currency in Egy= %.2f",currency_Egy);
}

int main()
{
    float currency_USD, currency_Egy;
    do
    {
        printf("\n Enter the currency in USD, Enter 0 to break \n");
        scanf("%f",&currency_USD);
        printf("%d",currency_converter(currency_USD,currency_Egy));
   }
   while (currency_USD!=0);
}

