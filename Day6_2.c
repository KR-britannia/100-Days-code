// Check if number is positive,negative or zero
#include<stdio.h>
int main(){
    int n;
printf("Enetr a number to check if it is Positive,Negative or Zero : ");
scanf("%d",&n);
if(n<0){
    printf("%d is a negative number\n",n);
}
else if(n>0){
    printf("%d is a positive number\n",n);
}
else{
    printf("%d is zero\n",n);
}
return 0;
}
