// Swapping of two numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Numbers before swapping \n");
    printf("%d \n",a);
    printf("%d \n",b);
    c=a;
    a=b;
    b=c;
    printf("Numbers after swapping \n");
    printf("%d \n",a);
    printf("%d \n",b);
    return 0;
}