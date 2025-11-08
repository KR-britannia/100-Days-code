// Area and Circumference of a Circle
#include<stdio.h>
int main(){

float r,circum,area;
printf("Enter the radius of circle in cm : ");
scanf("%f",&r);
area = 3.14*(r*r);
circum = 2*3.14*r;
printf("Area of circle is %.3f\n",area);
printf("Circumference of circle is %.3f\n",circum);

    return 0;
}