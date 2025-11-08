// Temperature from Celcius to Farhenite
#include <stdio.h>
int main()
{
   float temp;
   float celcius;

   printf("Enter temp in Celcius : ");
   scanf("%f",&celcius);

   temp = ((9.0/5)*celcius+32);

    printf("Entered temp in Celcius %.2f \n" ,celcius);
     printf("Temperature In Farhenite %.2f \n" ,temp);

    return 0;
}