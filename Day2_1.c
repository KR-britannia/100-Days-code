// Area and Perimeter of a Rectangle
#include <stdio.h>
int main()
{
   float l,b;
   printf("Enter length of rectangle :   ");
    scanf("%f", &l);
   printf("Enter breadth of rectangle :   ");
    scanf("%f", &b);

    float area = l*b; 
    float peri = 2*(l+b);

    printf("Area of rectangle is : %.2f \n",area);
    printf("Perimeter of rectangle is : %.2f \n",peri);
    
    return 0;
}