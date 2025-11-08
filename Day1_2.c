// Mathematical operations on two number 
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,diff=0,multi,div;
    printf("Enter the value of first number :  ");
    scanf("%d", &n1);
    printf("Enter the value of second number :  ");
    scanf("%d", &n2);
    sum = n1+n2;
    diff = n1-n2;
    multi = n1*n2;
   
    printf("Sum of two numbers is :  %d \n",sum);
    printf("Difference of two numbers is :  %d \n",diff);
    printf("Multiplication of two numbers is :  %d \n",multi);
     if(n2==0){
        printf("Cannot be divisible by 0 \n");
    }
    else{
    div = n1/n2;
    printf("Quotient  of two numbers is :  %d \n",div);
    }

    return 0;
    

}