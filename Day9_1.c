// To find the roots of a quadratic equation and categorize them
#include<stdio.h>
#include<math.h>
int main(){
    float d;
    int a,b,c;
    printf("Enter the value of b,a,c in the formula ((b^2)-4ac) to calculate the roots \n");
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    d= b*b - 4*a*c;
    if(d>0)
    printf("Real and Distinct roots");
    else if(d<0)
    printf("Complex or Imaginary roots");
    else
    printf("Real and Equal Roots");
    return 0;
}